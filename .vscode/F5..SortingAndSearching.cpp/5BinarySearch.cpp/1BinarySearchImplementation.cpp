#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Binary Search Implementation

int binarySearch(const vector<int>& arr, int target){
    int n = arr.size();

    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;  // to prevent integer overflow
        // or mid = s/2 + e/2, mid = (s+e)/2

        if(target == arr[mid]){
            return mid;
        }
        if(target > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

    }

    return -1;   // if the element is not found
}

int main(){
    vector<int> v = {10,20,30,40,50};
    int target = 40;

    int ans = binarySearch(v,target);
    cout << ans << endl;

    cout << endl;
    

    // ANOTHER METHOD

    bool answer =  binary_search(v.begin(),v.end(),20);

    if(answer == true){
        cout << "Found";
    }
    else{
        cout << "Not found";
    }

    return 0;
}