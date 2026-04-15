#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums){
    int n = nums.size();

    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(s == e){
            return mid;
        }

        if(mid+1 < n && nums[mid] > nums[mid+1]){
            return mid;
        }
        if(nums[mid] < nums[s]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int binarySearch(int s,int e, vector<int>& nums,int target){

    while(s <= e){
        int mid = s + (e-s)/2;

        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return -1;
}

int searchInRotatedArray(vector<int> nums,int target){
    int pivot_Index = pivotIndex(nums);
    // 2 sorted arrays h a1 and a2

    int n = nums.size();

    // a1
    // s -> 0
    // e -> pivotIndex
    if(target >= nums[0] && target <= nums[pivot_Index]){
        int ans = binarySearch(0,pivot_Index,nums,target);
        return ans;
    }

    // a2
    // s -> pivotIndex + 1
    // e -> n-1
    else{
        int ans = binarySearch(pivot_Index+1,n-1,nums,target);
        return ans;
    }

    return -1;
}

int main(){
    vector<int> v = {50,60,70,10,20,30,40};

    int ans = searchInRotatedArray(v,70);
    cout << ans << endl;
}