#include<iostream>
#include<vector>
using namespace std;

vector<int> shiftRight(const vector<int>& arr){
    vector<int> arrCopy = arr;
    int size = arrCopy.size();

    int last = arrCopy[size-1];

    for(int i = size-1; i>=0; i--){
        if(i != 0){
            arrCopy[i] = arrCopy[i-1];
        }
        else{
            arrCopy[0] = last;
        }
    }

    return arrCopy;
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans = shiftRight(arr);

    for(int i : ans){
        cout << i <<", ";
    }
    cout << endl;

    return 0;
}