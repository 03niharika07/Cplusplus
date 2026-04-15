#include<iostream>
using namespace std;

void printInvertedAlphabetTriangle(int n){
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<(n-i); j++){
            cout << ch;
            ch ++;
        }
        cout << endl;
    }
}

int main(){
    printInvertedAlphabetTriangle(5);
    return 0;
}

// or 

// void printInvertedAlphabetTriangle(int n) {
//         for(int i=n; i>=1; i--){
//             for(char ch = 'A'; ch<'A'+i; ch++){
//                 cout << ch;
//             }
//             cout << endl;
//         }
//     }