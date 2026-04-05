#include<iostream>
using namespace std;

int twosComplement(int num){
    int one_s_comp = ~(num);
    // ~ (tilde) : bitwise operator that flip the bits
    int two_s_comp = one_s_comp + 1;

    return two_s_comp;
}

int main(){
    int ans1 = twosComplement(5);
    cout << ans1 << endl;

    int ans2 = twosComplement(10);
    cout << ans2 << endl;

    return 0;
}