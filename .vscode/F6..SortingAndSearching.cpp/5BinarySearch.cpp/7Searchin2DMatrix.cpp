#include<iostream>
#include<vector>
using namespace std;

//Approach 1
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int column = matrix[0].size();

    int total = row*column;
    int s = 0;
    int e = total - 1;

    while(s <= e){
        int mid = s + (e-s)/2;

        // find mid from rowIndex,colIndex
        int rowIndex = mid / column;
        int colIndex = mid % column;

        if(target == matrix[rowIndex][colIndex]){
            return true;
        }
        else if(target > matrix[rowIndex][colIndex]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return false;
}

//Approach 2  (not working in vs code)
// bool search(vector<vector<int>>& mat, int target){
//     int row = mat.size();
//     int col = mat[0].size();

//     int i = 0;
//     int j = col - 1;

//     while (i < row && j >= 0 ){
//         if(target == mat[i][j]){
//             return true;
//         }
//         else if(target < mat[i][j]){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     return false;
// }

int main(){
    vector<vector<int>> v = {
        {2,4,6,8},
        {9,10,11,12},
        {15,16,17,18}
    };

    bool ans = searchMatrix(v,15);
    cout << ans << endl;

    // bool ans2 = search(v,9);
    // cout << ans << endl;

    return 0;
}