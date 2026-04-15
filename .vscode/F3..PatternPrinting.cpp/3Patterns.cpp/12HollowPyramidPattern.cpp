#include<iostream>
using namespace std;

void printHollowPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout << "  ";
        }
        for(int j=0; j<(2*i+1); j++){
            if ( i==(n-1) || i==0 || j==0 || j==2*i){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    printHollowPyramid(5);
    return 0;
}

//       *
//     *   *
//   *       *
// * * * * * * *