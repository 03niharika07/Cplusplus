#include<iostream>
#include<vector>
using namespace std;

int peakIndexRotatedArray(vector<int>& nums){
    int n = nums.size();

    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        // ans is on mid
        if(mid+1 < n && nums[mid] > nums[mid+1]){    /// for valid condition
            return mid;
        }

        // ans is on Line2
        if(nums[mid] < nums[s]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {50,60,70,10,20,30,40};
    vector<int> p = {3,4,5,6,7,1,2};

    int ans = peakIndexRotatedArray(v);
    cout << ans << endl;

    int ans2 = peakIndexRotatedArray(p);
    cout << ans2 << endl;

    return 0;
}