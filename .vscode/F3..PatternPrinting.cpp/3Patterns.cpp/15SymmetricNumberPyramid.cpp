#include<iostream>
using namespace std;

void printSymmetricNumberPYramid(int n){
    for(int i=1; i<=n; i++){
            int count = 1;
            for(int j=1; j<=i; j++){
                cout << count ;
                count ++;
            }
            for(int j=1; j<=(2*(n-i)); j++){
                cout << " ";
            }
            int end = i;
            for(int j=1; j<=i; j++){
                cout << end;
                end--;
            }
            cout << endl;
        }
}

int main(){
    printSymmetricNumberPYramid(6);
    return 0;
}