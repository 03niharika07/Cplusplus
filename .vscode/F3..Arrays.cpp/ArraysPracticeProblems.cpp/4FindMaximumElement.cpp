#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findMaximum( vector<int>& arr){
    int size = arr.size();
    int maximum = INT_MIN;

    for(int i=0; i<size; i++){
        int value = arr[i];
        maximum = max(value, maximum);
    }

    return maximum;
}

int main(){
    vector<int> arr;
    arr.push_back(100);
    arr.push_back(500);
    arr.push_back(300);
    arr.push_back(400);

    int ans = findMaximum(arr);
    cout << ans << endl;
    return 0;
}