#include<iostream>
using namespace std;

int reverseNumber(int num){
        int reverse = 0;
        while(num != 0){
            int digit = num%10;
            reverse = reverse*10 + digit;
            num = num/10;
        }
        return reverse;
    }
    string isPalindrome(int num) {
        int original = num;
        int reverse = reverseNumber(num);
        if(original == reverse){
            return "Yes";
        }
        else {
            return "No";
        }
        
    }

int main(){
    string ans = isPalindrome(111);
    cout << ans << endl;
    return 0;
}