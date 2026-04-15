#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> printExtremeElements(vector<int>& arr){
    int size = arr.size();

    // Sort the array
    sort(arr.begin(), arr.end());

    int i=0; 
    int j=size-1;

    vector<int> extreme;

    while(i < j){
        extreme.push_back(arr[i]);
        extreme.push_back(arr[j]);
        i++;
        j--;
    }
    if(i == j){
        extreme.push_back(arr[i]);
    }

    

    return extreme;
}

int main(){
    vector<int> arr = {1,2,3,5,4};

    vector<int> ans = printExtremeElements(arr);
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}