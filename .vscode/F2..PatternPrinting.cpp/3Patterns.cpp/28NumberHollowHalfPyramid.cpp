#include<iostream>
using namespace std;

void printNumberHollowHalfPyramid(int N){
    for(int i=1; i<=N; i++){
            int count = 1;
            for(int j=1; j<=i; j++){
                if(i==1 || i==2 || i==N || j==1){
                    cout << count;
                    count ++;
                }
                else if(j==i){
                    cout << i;
                }
                else{
                    cout << " ";
                }
                
            }
            cout << endl;
        }
}

int main(){
    printNumberHollowHalfPyramid(5);
    return 0;
}