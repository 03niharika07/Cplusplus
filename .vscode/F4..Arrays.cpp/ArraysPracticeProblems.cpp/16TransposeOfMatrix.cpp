#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> printTranspose(vector<vector<int>>& matrix){
    int rowsInOriginalMatrix = matrix.size();
    int colsInOriginalMatrix = matrix[0].size();

    int rowsInTransposeMatrix = colsInOriginalMatrix;
    int colsInTransposeMatrix = rowsInOriginalMatrix;

    vector<vector<int>> transpose(rowsInTransposeMatrix, vector<int>(colsInTransposeMatrix));

    for(int i=0; i<rowsInTransposeMatrix; i++){
        for(int j=0; j<colsInTransposeMatrix; j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    return transpose;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    vector<vector<int>> transpose = printTranspose(matrix);
    // for (int i = 0; i < transpose.size(); i++) {
    //     for (int j = 0; j < transpose[0].size(); j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    // cout << endl;
    // }

    //or

    for(auto row : transpose){               //auto ya fir vector<int>
        for(int i : row){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}