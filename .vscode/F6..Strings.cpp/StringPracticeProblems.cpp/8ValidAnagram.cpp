#include<iostream>
using namespace std;

bool isAnagram(const string& s, const string& t){
    int arr[1000] = {0};
    //for string s let's add up counts
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        arr[ch] ++;  // agar ch = 'a' → arr[97]++
    }
    // for string t , decrease the count
    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        arr[ch] --;  // 'n' aaya → arr[110]--
    }

    // check all occurrence are 0 only
    for(int i=0; i<1000; i++){
        if(arr[i] != 0){
            return false;
        }
    }
    // agr main yaha aagya
    // iska mtlb har jagah 0 mil gya
    return true;
}

int main(){
    string s = "neha";
    string t = "enah";

    bool ans = isAnagram(s,t);
    cout << ans << endl;

    return 0;
}