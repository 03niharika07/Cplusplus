#include<iostream>
using namespace std;

void printNumberPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        int count = 1;
        for(int j=0; j<=i; j++){
            cout << count << " ";
            count ++;
        }
        cout << endl;
    }
}

int main(){
    printNumberPyramid(4);
    return 0;
}

//       1
//     1 2
//   1 2 3
// 1 2 3 4