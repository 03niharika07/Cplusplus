#include<iostream>
#include<vector>
using namespace std;

int findElementInNearlySortedArray(const vector<int>& arr, int K){
    int n = arr.size();

    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        // check mid for the target or K
        // as this is an almost sorted array
        // target can be found on three indexes - mid, mid+1, mid-1
        if(arr[mid] == K){
            return mid;
        }
        if(mid+1 < n && arr[mid+1] == K){    // valid index checking
            return mid+1;
        }
        if(mid-1 >= 0 && arr[mid-1] == K){
            return mid-1;
        }

        if(arr[mid] > K){
            e = mid - 1;      // for optimisation - mid - 2  (because mid-1 and mid+1 already check ho chuke h )
        }
        else{
            s = mid + 1;      // for optimisation - mid + 2
        }
    }
    return -1;
}

int main(){
    vector<int> v = {10,30,20,40,60,50};

    int ans = findElementInNearlySortedArray(v,50);
    cout << ans << endl;
}