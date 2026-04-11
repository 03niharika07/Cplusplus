#include<iostream>
using namespace std;

// Approach 1
int findStringLength(const string& input){
    int length = input.length();
    return length;
}

// Approach 2
int findStrLength(const string& input){
    int count = 0;
    for(char c : input){
        count ++;
    }
    return count;
}

// Approach 3
int findStrLen(const string& input){
    int length = 0;
    int i=0;
    while(input[i] < *(input.end())){
        length ++;
        i++;
    }
    return length;
}

int main(){
    string name = "Niharika";

    int ans1 = findStringLength(name);
    cout << ans1 << endl;

    int ans2 = findStrLength(name);
    cout << ans2 << endl;

    int ans3 = findStrLen(name);
    cout << ans3 << endl;


    return 0;
}