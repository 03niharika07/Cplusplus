#include<iostream>
#include<math.h>
using namespace std;

string isNarcissistic(int num){
    int num2 = 0;

    // Step 1 : count the digits 
    int count = 0;
    int temp = num;
    while(temp !=0){
        int digit = temp % 10;
        count ++;
        temp = temp/10;
    }

    // Step 2 : find num2 
    temp = num;
    while(temp != 0){
        int digit = temp % 10;
        num2 = num2 + pow(digit, count);
        temp = temp/10;
    }

    // Step 3 : check
    return (num == num2) ? "yes" : "no" ;
}

int main(){
    string ans = isNarcissistic(123);
    cout << ans << endl;

    return 0;
}