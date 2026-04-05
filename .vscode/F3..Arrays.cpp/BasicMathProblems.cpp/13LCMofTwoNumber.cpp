#include<iostream>
using namespace std;

int findGCD(int a, int b){
    while(a != b){
        if(a > b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return b;
}

int findLCM(int a, int b){
    int gcd = findGCD (a, b);
    int lcm = (a * b)/ gcd;
    return lcm;
}

int main(){
    int ans = findLCM(28, 35);
    cout << ans << endl;
    return 0;
}