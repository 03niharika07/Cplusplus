#include<iostream>
using namespace std;

void printHollowDiamond(int n){
    // upper hollow diamond
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(i==1 || j==1 || j==2*i-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    // lower hollow diamond
    n--;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i; j++){
            cout << " ";
        }
        for(int j=1; j<=(2*(n-i)+1); j++){
            if(i==n || j==1 || j==(2*(n-i)+1)){
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
    printHollowDiamond(3);
    return 0;
}