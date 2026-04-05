#include<iostream>
#include<vector>
using namespace std;

// Two approaches 

// Approach 1 :
int peakIndexInMountainArray(vector<int>& nums){
    int n = nums.size();

    // Using Binary Search
    // left side is sorted in increasing order (Line 1) and right side is sorted in decreasing order (Line 2)
    int s = 0;
    int e = n - 1;

    int ans = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(nums[mid] < nums[mid+1]){
            // mid is on line1
            s = mid + 1;
        }
        else{
            // mid is on line2
            // peak element is also there
            // mid can be peak or non-peak element
            // store and compute
            ans = mid;
            e = mid - 1;
        }
    }

    return ans;

}

int main(){
    vector<int> v =  {0,1,4,6,3,2};    

    int ans = peakIndexInMountainArray(v);  // returns index of peak element i.e. 3
    cout << ans << endl;

    vector<int> p = {0,1,2,3,4};        // ab last element hi peak element hai toh ab agr e = mid - 1 hoga toh out of bound chla jaega toh asn -1 dega

    int ans2 = peakIndexInMountainArray(p);
    cout << ans2 << endl;

    return 0;
}