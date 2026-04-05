#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateBy90Degrees(vector<vector<int>>& matrix){
    int n = matrix.size();
    //square matrix hai toh rowSize = columnSize

    //Step 1. Transpose(using diagonal method)
    for(int i=0; i<n; i++){
        for(int j=i; j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //Step 2. Reverse rowWise
    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for(auto row : matrix){
        for(int i : row){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateBy90Degrees(matrix);
    return 0;
}