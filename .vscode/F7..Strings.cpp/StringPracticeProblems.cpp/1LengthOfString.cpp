#include<iostream>
using namespace std;

// Approach 1
int findStringLength(const string& input){
    int length = input.length();
    return length;   // or directly write return input.length()
}

// Approach 2
int findStrLength(const string& input){
    int count = 0;
    for(char c : input){
        count ++;
    }
    return count;
}

int main(){
    string name = "Niharika";

    int ans1 = findStringLength(name);
    cout << ans1 << endl;

    int ans2 = findStrLength(name);
    cout << ans2 << endl;


    return 0;
}