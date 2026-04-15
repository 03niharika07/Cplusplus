#include<iostream>
using namespace std;

int printSumOfDigits(int n){
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum = sum + digit;
        n= n/10;
    }
    return sum;
}

int main(){
    int answer1 = printSumOfDigits(238648);
    cout << "Sum of digits: " << answer1 << endl;
    return 0;
}