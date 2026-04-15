#include<iostream>
using namespace std;

string replaceCharacter(string s, char c1, char c2) {
    for(int i=0; i<s.length(); i++){
        if(s[i] == c1){
            s[i] = c2;
        }
    }
    return s;
}

int main(){
    string s = "Niharika";
    string ans = replaceCharacter(s,'a','s');
    cout << ans << endl;

    return 0;
}