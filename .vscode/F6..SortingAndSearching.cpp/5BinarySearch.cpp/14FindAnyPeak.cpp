#include<iostream>
#include<vector>
using namespace std;

int findAnyPeak(vector<int> nums){
    int n = nums.size();

    // single element
    if(n == 1) return 0;

    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;

    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(nums[mid] < nums[mid+1]){
            // Line 1 p hai
            // right move
            s = mid + 1;
        }
        else if(nums[mid] < nums[mid-1]){
            // line 2 p h
            // left move
            e = mid - 1;
        }
        else{
            // peak element hai
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {1,2,4,3,5,0};
    vector<int> p = {1,2,34,5,6,7,80,4};

    int ans = findAnyPeak(v);
    cout << ans << endl;

    int ans2 = findAnyPeak(p);
    cout << ans2 << endl;

    return 0;
}
