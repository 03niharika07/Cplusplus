#include<iostream>
using namespace std;

void printPascalTriangle(int n){
    for(int i=0; i<n; i++){
            int C=1;
            for(int j=0; j<=i; j++){
                cout << C << " ";
                C = C * (i-j) / (j+1);
            }
            cout << endl;
        }
}

int main(){
    printPascalTriangle(5);
    return 0;
}