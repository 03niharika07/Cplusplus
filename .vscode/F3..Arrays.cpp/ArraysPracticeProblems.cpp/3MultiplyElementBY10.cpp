#include<iostream>
#include<vector>
using namespace std;

vector<int> multiplyElementByTen( const vector<int>& arr){
    vector<int> arrCopy = arr;
    int size = arrCopy.size();

    for(int i=0; i<size; i++){
        arrCopy[i] = arrCopy[i] * 10;
    }

    return arrCopy;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    vector<int> ans = multiplyElementByTen(arr);
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}