#include<iostream>
#include<limits.h>
using namespace std;

// int printSmallestDigit(int n){
//     int smallest = INT_MAX;
    
//     while (n != 0){
//         int digit = n % 10;
//         if(digit < smallest){
//             smallest = digit;
//         }
//         n = n / 10;
//     }
//     return smallest;
// }

// OR 

int printSmallestDigit(int n){
    int smallest = INT_MAX;
    
    while (n != 0){
        int digit = n % 10;
        smallest = min(digit, smallest);
        n = n / 10;
    }
    return smallest;
}

int main(){
    int ans = printSmallestDigit(638031);
    cout << ans << endl;
    return 0;
}