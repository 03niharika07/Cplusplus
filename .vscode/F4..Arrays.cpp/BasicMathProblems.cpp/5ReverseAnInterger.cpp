#include<iostream>
#include<limits.h>
using namespace std;

int reverseInteger(int n){

    // 0 ko handle kro 
    if(n == 0){
        return 0;
    }

    // sign info store kro boolean flag m
    bool flag = 0;
    if(n > 0){
        // positive no.
        flag = 1;
    }
    else{
        // negative no.
        flag = 0;
    }

    // remove kro sign
    n = abs(n);

    // reverse krdo
    long long int reverse = 0;   // long long int m islie kiya bcoz reverse no. may exceed the max value of integer
        while(n !=0){
            int digit = n%10;
            reverse = reverse * 10 + digit;
            n = n/10;
        }

    // reverse number pr sign lgado
    if(flag == 0){
        reverse = 0-reverse;
    }
    // range check 
    if( reverse > INT_MAX || reverse < INT_MIN){
        return 0;
    }

    // return krdo
    return reverse;
}

int main(){
    long long int ans1 = reverseInteger(1234567892);  // returns 0
    cout << ans1 << endl;
    long long int ans2 = reverseInteger(-1234);
    cout << ans2 << endl;
    return 0;
}