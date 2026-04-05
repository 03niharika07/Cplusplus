#include<iostream>
using namespace std;

unsigned long long factorial(int num){
    if(num == 0 || num == 1) return 1;

    unsigned long long fact = 1;
    for(int i= num ; i>=1; i--){
        fact *= i;
    }

    //or
    
    // int i= num;
    // while(i>=1){
    //     fact *= i;
    //     i--;
    // }

    //or

    // while(num >= 1){
    //     fact *= num;
    //     num--;
    // }

    return fact;
}

int main(){
    unsigned long long ans = factorial(5);
    cout << ans << endl;
    return 0;
}