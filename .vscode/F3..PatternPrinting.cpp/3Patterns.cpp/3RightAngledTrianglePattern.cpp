#include<iostream>
using namespace std;

void printRightAngledTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main(){
    printRightAngledTriangle(4);
    return 0;
}

// *
// * *
// * * *
// * * * *