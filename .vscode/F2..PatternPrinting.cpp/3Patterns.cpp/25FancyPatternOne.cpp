#include<iostream>
using namespace std;

void printFancyPattern1(int N, char C){
    int mid= N/2;
    for(int i=0; i<=mid; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0; k<(N-2*i); k++){
            cout << C;
        }
        cout << endl;
    }
    for(int i=mid-1; i>=0; i--){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0; k<(N-2*i); k++){
            cout << C;
        }
        cout << endl;
    }
}

int main(){
    printFancyPattern1(7,'@');
    cout << endl;
    printFancyPattern1(3,'+');
    return 0;
}