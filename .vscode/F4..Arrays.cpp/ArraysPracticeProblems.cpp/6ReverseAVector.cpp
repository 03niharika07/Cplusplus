#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(const vector<int>& arr){
    vector<int> arrCopy = arr;
    int size = arrCopy.size();

    int i=0;
    int j=size-1;

    while(i<=j){
        swap(arrCopy[i],arrCopy[j]);
        i++;
        j--;
    }

    return arrCopy;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int> ans = reverseArray(arr);
    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}