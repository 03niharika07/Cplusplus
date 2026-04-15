#include<iostream>
using namespace std;

string toUpperCase(string s) {
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    return s;
}

int main(){
    string s = "Niharika";

    string ans = toUpperCase(s);
    cout << ans << endl;
}