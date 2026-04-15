#include <iostream>
using namespace std;

void printSquare(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printSquare(5);
    cout << endl;
    printSquare(2);
    cout << endl;
    printSquare(10);
    return 0;
}

//  ****
//  ****
//  ****
//  ****