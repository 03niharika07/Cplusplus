#include<iostream>
using namespace std;

int printCountDivisors (int num){
    if(num == 1){
        return 1;
    }

    int count_divisor = 2;
    // 1 and the number itself toh honge hi divisor
    for(int i=2; i<num; i++){
        if((num % i) == 0){
            count_divisor ++;
        }
    }
    return count_divisor;
}


int main(){
    int ans = printCountDivisors(6);
    cout << ans << endl;
    return 0;
}