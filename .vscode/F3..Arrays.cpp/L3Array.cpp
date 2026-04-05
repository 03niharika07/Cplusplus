#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// 2-D ARRAY

// int main(){
//     int arr[3][2];              // stores garbage value
//     cout << arr[1][1] << endl;

//     int v[2][3] = {1,2,3,4,5,6};              
//     cout << v[0][0] << " " << v[0][1] << " " << v[0][2] << endl;
//     cout << v[1][0] << " " << v[1][1] << " " << v[1][2] << endl;

//     // memory m formula use hora hai isko access krne k liye 
//     // c*i+j : c is the number of columns 
//     // example : here c is 3, so for accesing v[1][0] :- 3*1+j=3


//     // CREATION OF 2D ARRAY

//     // Declaration
//     int a[4][5];

//     // Initialize 
//     int b[3][2] = {
//         {1,2},
//         {3,4},
//         {5,6}
//     };


//     // ACCESSING IN 2D ARRAY

//     cout << b[0][0] << " " << b[0][1] << endl;
//     cout << b[1][0] << " " << b[1][1] << endl;
//     cout << b[2][0] << " " << b[2][1] << endl;


//     // INPUT AND PRINT IN 2D ARRAY

//     int c[3][2];

//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cin >> c[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){               
//         for(int j=0; j<2; j++){
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }
//         return 0;
// }



// TRAVERSAL IN 2D ARRAY

// 1. Row Wise Traversal
void printRowWise(int d[][3], int rowSize, int columnSize){              //atleast column size mention
    for(int i=0; i<rowSize; i++){                 // outer loop : row ; inner loop : col
        for(int j=0; j<columnSize; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}

// 2. Column Wise Traversal
void printColumnWise(int d[][3], int rowSize, int columnSize){
    for(int col=0; col<columnSize; col++){        // outer loop : col ; inner loop : row
        for(int row=0; row<rowSize; row++){
            cout << d[row][col] << " ";
        }
        cout << endl;
    }
}


// Ques : Print Row Wise Sum
void printRowWiseSum(int arr[][3], int rowSize, int columnSize){
    for(int i=0; i<rowSize; i++){
        int sum = 0;
        for(int j=0; j<columnSize; j++){
            sum = sum + arr[i][j];
        }
        cout << "Sum of Row " << i << " : " << sum << endl;
    }
}

// Ques : Print Column Wise Sum 
void printColumnWiseSum(int arr[][3], int rowSize, int columnSize){
    for(int col=0; col<columnSize; col++){
        int sum = 0;
        for(int row=0; row<rowSize; row ++){
            sum = sum + arr[row][col];
        }
        cout << "Sum of Column " << col << " : " << sum << endl;
    }
}

// Ques : Search in 2D Array
pair<int,int> searchIn2Darray(int arr[][3], int rowSize, int columnSize, int target){
    for(int i=0; i<rowSize; i++){             // row wise search
        for(int j=0; j<columnSize; j++){
            if((arr[i][j]) == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

// Ques : Find minimum element in 2D Array
int printMinimumElement(int arr[][3], int n, int m){
    int minimum = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int value = arr[i][j];
            minimum = min(value, minimum);
        }
    }
    return minimum;
}

// Ques : Find maximum element in 2D Array
int printMaximumElement(int arr[][3], int n, int m){
    int maximum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int value = arr[i][j];
            maximum = max(value, maximum);
        }
    }
    return maximum ;
}

int main(){
    int d[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printRowWise(d,2,3);
    cout << endl;

    printColumnWise(d,2,3);
    cout << endl;

    printRowWiseSum(d,2,3);
    cout << endl;

    printColumnWiseSum(d,2,3);
    cout << endl;

    pair<int,int> ans = searchIn2Darray(d,2,3,7);
    cout << "[" << ans.first << "," << ans.second << "]" << endl;
    cout << endl;

    int sol = printMinimumElement(d,2,3);
    cout << sol << endl;
    cout << endl;

    int answer = printMaximumElement(d,2,3);
    cout << answer << endl;
    cout << endl;

    // 2D Array using vector 
    vector<vector<int>> arr(5, vector<int>(4,-1));

    
    return 0;
}

    





