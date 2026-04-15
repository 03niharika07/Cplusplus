#include<iostream>
#include<vector>
using namespace std;

vector<int> columnSums(const vector<vector<int>>& matrix) {
    
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    vector<vector<int>> matrixCopy = matrix;
    vector<int> sumOfColumns;

    for(int col=0; col<colSize; col++){
        int sum = 0;
        for(int row=0; row<rowSize; row++){
            sum += matrixCopy[row][col];
        }
        sumOfColumns.push_back(sum);
    }

    return sumOfColumns;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,1},
        {2,5,4},
        {1,0,0}
    };

    vector<int> ans = columnSums(arr);
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}