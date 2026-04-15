#include<iostream>
#include<vector>
using namespace std;

double printAverageOfElements(const vector<int>& arr){
    int size = arr.size();
    double sum = 0;
    double average = 0;

    for(int i=0; i<size; i++){
        int value = arr[i];
        sum = sum + value;
    }

    average = sum / size;
    return average;
}

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);

    int ans = printAverageOfElements(arr);
    cout << ans << endl;
    return 0;
}