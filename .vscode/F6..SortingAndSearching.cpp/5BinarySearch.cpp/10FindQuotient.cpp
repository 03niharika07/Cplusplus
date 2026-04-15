#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

long long int solve(long long int dividend, long long int divisor){

    // division by zero
    if(divisor == 0){
        return INT_MAX;
    }

    int s = 0;
    int e = dividend;

    int ans = -1;

    while(s <= e){
        long long int mid = s + ((e-s)>>1);  // right shift : divide by zero
        long long product = divisor*mid;

        if(product == dividend){
            return mid;
        }
        if(product > dividend){
            e = mid - 1;
        }
        else{
            // ans ho bhi skta hai
            // store and compute 
            ans = mid;
            s = mid + 1;
        }
    }
}

long long int findQuotient(int dividend,int divisor) {
    
    // 1. Specific overflow case required by the problem
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    // 2. Safely get absolute values using long long to prevent abs(INT_MIN) overflow
    long long n = (dividend < 0) ? -(long long)dividend : (long long)dividend;
    long long d = (divisor < 0) ? -(long long)divisor : (long long)divisor;

    // 3. Call your solve function
    long long ans = solve(n, d);

    // 4. Correctly apply the sign
    // If one is negative and the other is positive, result is negative
    if ((dividend < 0) ^ (divisor < 0)) {
        return -ans;
    }
    
    return ans;
}

int main(){
    long long int ans = findQuotient(144,12);
    cout << ans << endl;

    return 0;
}