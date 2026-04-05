#include<iostream>
using namespace std;

void printHourglassPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0; k<(2*(n-i)); k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1; i>=0; i-- ){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0; k<(2*(n-i)); k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printHourglassPattern(4);
    return 0;
}