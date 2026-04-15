#include<iostream>
using namespace std;

// string checkEvenOdd(int n){
//     if (n % 2 == 0){
//         return "Even";
//     }
//     else{
//         return "Odd";
//     }
// }

// OR

// string checkEvenOdd(int n){
//     if(n & 1){                  // already means !=0, false condition
//         return "Odd";
//     }
//     else{
//         return "Even";
//     }
// }

// OR

string checkEvenOdd(int n){
    if((n & 1) == 1){                  
        return "Odd";
    }
    else{
        return "Even";
    }
}

int main(){
    string ans = checkEvenOdd(65467);
    cout << ans << endl;
    return 0;
}