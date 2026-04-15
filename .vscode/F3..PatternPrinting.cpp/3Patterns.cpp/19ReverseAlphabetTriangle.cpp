#include<iostream>
using namespace std;

void printReverseAlphabetTriangle(int n){
    for(int i=1; i<=n; i++){
            char ch='A'+n-i;
            for(int j=1; j<=i; j++){
                cout << ch;
                ch++;
            }
            cout << endl;
        }
}

int main(){
    printReverseAlphabetTriangle(5);
    return 0;
}