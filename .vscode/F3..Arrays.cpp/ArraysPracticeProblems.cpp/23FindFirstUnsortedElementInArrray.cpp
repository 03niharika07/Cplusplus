#include<iostream>
#include<vector>
using namespace std;

int findFirstUnsortedIndex(const vector<int>& arr){
    int size = arr.size();

    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,4,3,5};

    int ans = findFirstUnsortedIndex(arr);
    cout << ans << endl;

    return 0;
}