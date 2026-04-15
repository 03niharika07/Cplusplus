#include<iostream>
using namespace std;

void printFancyPattern2(int N){
     for(int i=0; i<N; i++){
            for(int j=0; j<(N-i-1); j++){
                cout << " ";
            }
            int count=1;
            for(int k=0; k<=i; k++){
                cout << count;
                count ++;
            }
            int end = i;
            for(int j=0; j<i; j++){
                cout << end;
                end --;
            }
            cout << endl;
        }
}

int main(){
    printFancyPattern2(4);
    return 0;
}