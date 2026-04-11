#include<iostream>
using namespace std;

bool checkPalindrome(string s){
    int left = 0;
    int right = s.size() - 1;  // or s.length()

    while(left <= right){
        if(s[left] != s[right]){
            return false;
        }
        else{
            left ++;
            right --;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);

    bool ans = checkPalindrome(s);
    cout << ans << endl;

    return 0;
}