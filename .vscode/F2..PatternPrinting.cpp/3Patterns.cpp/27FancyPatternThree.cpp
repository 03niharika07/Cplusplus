#include<iostream>
using namespace std;

void printFancyPattern3(int N, char C){
    int mid=N/2;
        for(int i=0; i<=mid; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=0; j<(N-2*i); j++){
                cout << C;
            }
            cout << endl;
        }
        for(int i=mid-1; i>=0; i--){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=0; j<(N-2*i); j++){
                cout << C;
            }
            cout << endl;
        }
}

int main(){
    printFancyPattern3(7,'@');
    return 0;
}