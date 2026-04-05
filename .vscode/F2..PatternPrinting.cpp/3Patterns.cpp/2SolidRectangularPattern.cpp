#include <iostream>
using namespace std;

void printSolidRectangle(int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printSolidRectangle(4,5);
    return 0;
}

// *****
// *****
// *****