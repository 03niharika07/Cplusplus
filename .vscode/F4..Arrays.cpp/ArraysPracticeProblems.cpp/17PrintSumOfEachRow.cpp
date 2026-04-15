#include<iostream>
#include<vector>
using namespace std;

vector<int> rowSums(const vector<vector<int>>& arr){

    int rowSize = arr.size();
    int colSize = arr[0].size();

    vector<vector<int>> arrCopy = arr;

    vector<int> sumOfRows;

    for(int i=0; i<rowSize; i++){
        int sum = 0;
        for(int j=0; j<colSize; j++){
            sum += arrCopy[i][j];
        }
        sumOfRows.push_back(sum);
    }

    return sumOfRows;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3},
        {4,4,5},
        {4,6,7}
    };

    vector<int> ans = rowSums(arr);
    for(int i : ans){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}