#include<iostream>
using namespace std;

void printSymmetricAlphabetPyramid(int n){
     for(int i=0; i<n; i++){
            for(int j=0; j<(n-i-1); j++){
                cout << " ";
            }
            char ch = 'A';
            for(int j=0; j<=i; j++){
                cout << ch;
                ch++;
            }
            ch = ch-2;
            while(ch >= 'A'){
                cout << ch;
                ch --;
            }
            cout << endl;
        }
}

int main(){
    printSymmetricAlphabetPyramid(6);
    return 0;
}