#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> spiral;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = n-1;
    int endingCol = m-1;

    while(startingRow <= endingRow && startingCol <= endingCol){
            
        if(startingRow <= endingRow){
            for(int i=startingCol; i<=endingCol; i++){
                spiral.push_back((matrix[startingRow][i]));
            }
        }
        startingRow++;

        if(startingCol <= endingCol){
            for(int i=startingRow; i<=endingRow; i++){
                spiral.push_back((matrix[i][endingCol]));
            }
        }
        endingCol--;

        if(startingRow <= endingRow){
            for(int i=endingCol; i>=startingCol; i--){
                spiral.push_back((matrix[endingRow][i]));
            }
        }
        endingRow--;

        if(startingCol <= endingCol){
            for(int i=endingRow; i>=startingRow; i--){
                spiral.push_back((matrix[i][startingCol]));
            }
        }
        startingCol++;
        }

    return spiral;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,4,5},
        {2,4,5}
    };

    vector<int> spiral = spiralOrder(matrix);
    for(int i : spiral){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}