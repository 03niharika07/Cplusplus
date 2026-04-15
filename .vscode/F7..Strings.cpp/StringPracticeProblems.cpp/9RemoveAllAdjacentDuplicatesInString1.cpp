#include<iostream>
using namespace std;

string removeDuplicates(string s){
    string ans = "";

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // 2 options
        // 1. insert krdo agr cha and rightmost different h ya ans empty hai
        if(ans.empty()){
            ans.push_back(ch);
        }
        else if(ch != ans.back()){
            ans.push_back(ch);
        }
        else{
            // ch and rightmost same h
            // remove the rightmost element
            ans.pop_back();
        }
        // 2. don't insert and remove rightmost from ans : ch and rightmost same hoga
    }
    return ans;
}
int main(){
    string s = "abbaca";
    string ans = removeDuplicates(s);
    cout << ans << endl;
    
    return 0;
}