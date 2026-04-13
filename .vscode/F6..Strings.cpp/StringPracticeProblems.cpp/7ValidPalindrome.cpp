#include<iostream>
using namespace std;

// valid character: either a number or an alphabet
bool isValidCharacter(char ch){
    if(ch >= '0' && ch <= '9'){
        return true;
    }
    if(ch >= 'a' && ch <= 'z'){
        return true;
    }
    if(ch >= 'A' && ch <= 'Z'){
        return true;
    }
    return false;
}

// this function removes every character except numbers and alphabets
// also it converts all alphabets into lower case
string normaliseString(string& s){
    // remove every character except
    // alphabets
    // and numbers
    string newStr = "";
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(isValidCharacter(ch)){
            if(ch >= 'A' && ch <= 'Z'){
                ch = ch - 'A' + 'a';
            }
            newStr.push_back(ch);
        }
    }
    return newStr;
}

bool isPalindrome(string s){
    string newStr = normaliseString(s);
    int i=0;
    int j=newStr.length()-1;

    while(i <= j){
        if(newStr[i] != newStr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s = "race a car";
    string str = "A man, a plan, a canal: Panama";

    bool ans = isPalindrome(s);
    cout << ans << endl;

    bool ans2 = isPalindrome(str);
    cout << ans2 << endl;

    return 0;
}