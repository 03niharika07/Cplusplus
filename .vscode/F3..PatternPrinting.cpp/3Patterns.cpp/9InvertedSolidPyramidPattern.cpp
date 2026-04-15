#include<iostream>
using namespace std;

void printInvertedSolidPyramid(int n){
    for(int i=0; i<n; i++){
            // upper pyramid
            for(int j=0; j<(n-i-1); j++){
                cout << " ";
            }
            for (int j=0; j<(2*i+1); j++){
                cout << "*";
            }
            cout << endl;
        }
        // lower pyramid
        n--;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << " ";
            }
            for(int j=0; j<(2*(n-i))-1; j++){
                cout << "*";
            }
            cout << endl;
        }
}

int main(){
    printInvertedSolidPyramid(5);
    return 0;
}

// *****
//  ***
//   *