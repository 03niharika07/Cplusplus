#include<iostream>
using namespace std;

void printAlphabetTriangle(int n){
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout << ch;
            ch ++;
        }
        cout << endl;
    }
}

int main(){
    printAlphabetTriangle(6);
    return 0;
}