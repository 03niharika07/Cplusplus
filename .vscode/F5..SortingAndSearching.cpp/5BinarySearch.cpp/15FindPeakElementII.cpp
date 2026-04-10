#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// Brute Force  O(mn)
// M1 : Iterate through each element and check wo peak h ya nhi
// M2 : Max element find krna , vhi peak hoga 

// M3 : Binary Search

int findMaxIndex(vector<vector<int>>& mat, int n, int m, int j){
    // finding jth midth column's column wise max element
    int maxi = INT_MIN;
    int index = -1;
    for(int i=0; i<n; i++){
        if(mat[i][j] > maxi){
            maxi = mat[i][j];
            index = i;
        }
    }
    return index;
}
vector<int> findPeakGrid(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();

    int s = 0;
    int e = m-1; // column wise

    while(s <= e){
        int mid = (s+e)/2;

        int maxRowIndex = findMaxIndex(mat, n, m, mid);
        // now my approach deduced to 1D sort of thinking
        int left = mid-1 >= 0 ? mat[maxRowIndex][mid-1] : INT_MIN;
        int right = mid+1 < m ? mat[maxRowIndex][mid+1] : INT_MIN;

        if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right){
            return {maxRowIndex, mid};
        }
        else if(mat[maxRowIndex][mid] < left){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

    }
    return {};
}

int main(){
    vector<vector<int>> mat = {
        {5,6,7,10,8,4},
        {9,12,11,14,13,2},
        {15,16,18,20,17,3},
        {8,10,9,19,11,1},
        {4,7,6,5,3,0}
    };

    vector<int> ans = findPeakGrid(mat);

    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}