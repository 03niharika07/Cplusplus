#include<iostream>
#include<vector>
using namespace std;

// isme jo array h voh [0,n] both included
// like agr n=5 haiitoh 0,1,2,3,4,5 , n+1 elements

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
        else{         // agr mera element index se bdha hai toh 
            ans = mid;
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    // when last element is missing

    // vector<int> v(5); 
    // iska mtlb hai maine 5 size ka vector bna dia aur saare blocks 0 se automatically initialise hogye ab agr m pushback krungi toh fir 5 zero k baad add honge numbers

    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

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