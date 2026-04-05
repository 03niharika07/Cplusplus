#include<iostream>
using namespace std;

void printRhombusPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        for(int j=1; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    printRhombusPattern(4);
    return 0;
}