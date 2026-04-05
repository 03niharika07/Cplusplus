#include<iostream>
using namespace std;

void printNumberTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    printNumberTriangle(5);
    return 0;
}

// 1
// 22
// 333
// 4444
// 55555