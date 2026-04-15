#include<iostream>
using namespace std;

int printReverseNumber(int n){
    int reverse = 0;
    while (n !=0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n/10;
    }
    return reverse;
}

int main(){
    int ans = printReverseNumber(1234722);
    cout << ans << endl;
    return 0;
}