#include<iostream>
using namespace std;

int findGCD(int a , int b){
    while ( a != b ){
        if (a > b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a; // or return b
}

int main(){
    int ans = findGCD(28, 35);
    cout << ans << endl;
    return 0;
}
