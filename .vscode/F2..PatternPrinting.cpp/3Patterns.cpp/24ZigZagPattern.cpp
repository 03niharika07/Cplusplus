#include<iostream>
using namespace std;

void printZigZagPattern(int n){
    for(int i=n; i>=0; i--){
        for(int j=0; j<(n-i); j++){
            cout << " ";
        }
        for(int k=0; k<(2*i+1); k++){
            if( k==0 || k==(2*i)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        for(int k=0; k<=((2*i)+1); k++){
            if(k==0 || k==(2*i)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    printZigZagPattern(4);
    return 0;
}