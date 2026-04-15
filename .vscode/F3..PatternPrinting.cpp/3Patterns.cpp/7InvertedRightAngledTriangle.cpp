#include<iostream>
using namespace std;

// void printInvertedRightAngledTriangle(int n){
//     for(int i=0; i<n; i++){
//         for(int j=n; j>i; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//OR

void printInvertedRightAngledTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printInvertedRightAngledTriangle(6);
    return 0;
}

// *****
// ****
// ***
// **
// *