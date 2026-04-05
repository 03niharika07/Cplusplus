#include<iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>& arr ){
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    int n = arr.size();

    // d1 sum
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i][i];
    }

    // d2 sum
    for(int i=0; i<n; i++){
        sum += arr[i][n-i-1];
    }

    // removing duplicate element
    if (n&1){
        // n is odd
        sum -= arr[n/2][n/2];
    }

    // return 
    return sum;
}

int main(){
    vector<vector<int>> arr = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int ans = diagonalSum(arr);
    cout << ans << endl;

    return 0;
}