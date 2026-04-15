#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>& nums, int target){
    int n = nums.size();

    int s = 0;
    int e = n-1;

    int ans1 = -1;

    // First Occurrence (lower bound)
    while(s <= e){
        int mid = s + (e-s)/2;

        if(target == nums[mid]){
            ans1 = mid;     // store and compute
            e = mid - 1;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans1;
}

int lastOccurrence(vector<int>& nums, int target){
    int n = nums.size();

    int s = 0;
    int e = n-1;

    int ans2 = -1;

    // Last Occurrence (upper bound)
    while(s <= e){
        int mid = s + (e-s)/2;

        if(target == nums[mid]){
            ans2 = mid;        // store and compute
            s = mid + 1;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans2;
}

int totalOccurrence(vector<int>&nums, int target){
    int first = firstOccurrence(nums,target);
    int last = lastOccurrence(nums,target);

    int totalTimes = last - first + 1;
    return totalTimes;
}

int main(){
    vector<int> v = {1,2,2,2,3,4};

    int ans = totalOccurrence(v,2);
    cout << "Total Occurrence : " << ans << endl;


    return 0;
}