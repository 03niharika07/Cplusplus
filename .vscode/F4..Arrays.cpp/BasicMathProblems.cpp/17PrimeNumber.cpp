#include<iostream>
#include<math.h>
using namespace std;

string isPrime(int num){
    if(num == 1){
        return "no";
    }

    if(num == 2 || num == 3){
        return "yes";
    }

    for(int i=2; i<num; i++){
        if((num%i) == 0){
            return "no";
        }
    }

    // or
    // for(int i=2; i<=sqrt(num); i++){
    //     if((num%i) == 0){
    //         return "no";
    //     }
    // }
    
    return "yes";
}

int main(){
    string ans = isPrime(5);
    cout << ans << endl;

    return 0;
}