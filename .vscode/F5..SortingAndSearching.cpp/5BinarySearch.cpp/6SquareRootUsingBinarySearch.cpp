#include<iostream>
#include<vector>
using namespace std;

int squareRoot(int x){
    // using binary search
    int target = x;

    int s = 0;
    int e = target;

    int ans = -1;
    long long int mid = s + (e-s)/2; // integer overflow ho skta

    while(s <= e){
        long long int product = mid * mid;

        //check mid
        if(product == target){
            return mid;
        }

        //greater aaya toh
        else if(product > target){
            e = mid - 1;
        }

        //smaller aaya toh , ye ans ho bhi skta h
        // store and compute
        else{
            ans = mid;
            s = mid + 1;
        }

        // mid update
        mid = s + (e-s)/2;
    }

        return ans;
}

int main(){
    int ans = squareRoot(25);
    cout << ans << endl;
    
    return 0;
}