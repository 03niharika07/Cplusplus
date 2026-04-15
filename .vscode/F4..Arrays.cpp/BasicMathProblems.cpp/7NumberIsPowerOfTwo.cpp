#include<iostream>
using namespace std;

string isPowerOfTwo(int num){
    if(num & (num-1)){
        return "No";
    }
    else{
        return "Yes";
    }
}

int main(){
    string ans = isPowerOfTwo(64);
    cout << ans << endl;
    return 0;
}