#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int>& nums){
    // using binary search
    // assuming that the array is sorted
    int n = nums.size();

    int s = 0;
    int e = n-1;

    int ans = n;    // kyuki agr hum n se initialise nhi krenge toh fir agr last index ans hoga toh voh aage bdh jaega toh condition invalid hojaegi aur hum ans nhi de paenge
    // ab last number likha thodi h toh voh iterate kispe krega islie humne n se initialise krra

    while(s <= e){
        int mid = s + (e-s)/2;

        if(nums[mid] == mid){
            s = mid + 1;
        }
        else if(nums[mid] == mid + 1){
            ans = mid;
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    // when last element is missing
    vector<int> v(5);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int ans = findMissingNumber(v);    // returns n
    cout << ans << endl;

    // when first element is missing
    vector<int> p = {1,2,3,4,5};

    int ans2 = findMissingNumber(p);   // return 0
    cout << ans2 << endl;

    // when middle element is missing
    vector<int> q = {0,1,2,4,5};

    int ans3 = findMissingNumber(q);   // return 3
    cout << ans3 << endl;

    return 0;
}