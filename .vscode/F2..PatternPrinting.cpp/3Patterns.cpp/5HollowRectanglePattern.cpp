#include<iostream>
using namespace std;

void printHollowRectangle(int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || i==(n-1) || j==0 || j==(m-1)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    printHollowRectangle(4,5);
    return 0;
}