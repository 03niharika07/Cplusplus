#include<iostream>
#include<cmath>
using namespace std;

// Decimal To Binary Conversion
   
// int decimalToBinaryMethod1 (int n) {
//     //division method
//     int binaryno =0 ;
//     int i = 0;
//     while (n>0) {
//         int bit = n % 2;
//         binaryno = ( bit*pow (10,i)) + binaryno;   // precision issue ho skta
//         n = n/2;
//     }
//     return binaryno;
//     }

// int main() {
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod1(n);
//     cout << binary << endl;
//     return 0;
// }

// or

int decimalToBinaryMethod1(int n){
    int binaryno = 0;
    int place = 1;

    while (n > 0) {      // n=10
        int bit = n % 2;   // 0, n=5 -> 1, n=2 -> 0 , n=1 -> 1 , n=0 -> loop will terminate here as n>0
        binaryno = binaryno + bit * place;  // 0+0*1=0 , binaryno=0 -> 0+1*10=10, binaryno=10 -> 10+0*100=10, binaryno=10 -> 10+1*1000=1010
        n = n / 2;  // 5 , 2 , 1 ,0 
        place = place * 10;  // 10 , 100 , 1000 , 10000
    }
    return binaryno;
}

int main() {
    int n;
    int binaryno = 0;

    cout << "Enter a decimal no: ";
    cin >> n;
    cout << "The decimal no. is: " << n << endl;

    binaryno = decimalToBinaryMethod1(n);
    cout << "Decimal to Binary Conversion of " << n << ": " << binaryno;
    return 0;
}


// int decimalToBinaryMethod2 (int n) {    // working in replit, not working in vs code
//         //bitwise method
//         int binaryno = 0;
//         int i = 0;
//         while (n>0) {
//             int bit = (n & 1);
//             binaryno = bit*pow (10,i++)+ binaryno;   // precision issue ho skta
//             n = n >> 1;
//         }
//         return binaryno;
//     }

// int main() {
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod2(n);
//     cout << binary << endl;
//     return 0;
// }

// or 

// int decimalToBinaryMethod2(int n){
//     int binaryno = 0;
//     int place = 1;

//     while (n > 0){    // n=15
//         int bit = n & 1;  // 1111 & 0001= 1, n=111 -> 111 & 001=1, n=11 -> 11 & 01=1, n=1 -> 1&1=1, n=0 -> loop will terminate
//         binaryno = binaryno + bit * place;  // 0+1*1=1 , 1+1*10=11, 11+1*100=111, 111+1*1000=1111
//         n = n>>1;  //111, 11, 1, 0
//         place = place * 10; //10, 100, 1000, 10000
//     }
//     return binaryno;
// }

// int main() {
//     int n;
//     int binaryno = 0;
//     cin >> n;
//     cout << "Decimal no: " << n << endl;
//     binaryno = decimalToBinaryMethod2(n);
//     cout << "Decimal to binary conversion of " << n << ": " << binaryno << endl;
//     return 0;
// }






// Binary To Decimal Conversion

// int binaryToDecimalMethod1(int n){
//     int decimal = 0;
//     int place = 1;

//     while(n){    // n=101
//         int bit = n % 10;   // 101%10=1, n=10 -> 10%10=0, n=1 -> 1%10=1, n=0 -> loop will terminate
//         decimal = decimal + bit*place; // 0+1*1=1. 1+0*2=1. 1+1*4=5
//         n = n / 10;   // 101/10=10,  10/10=1, 1/10=0
//         place = place * 2; // 2, 4, 8
//     }
//     return decimal;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << "Binary no:" << n << endl;
//     cout << "Binary To Decimal Conversion of " << n <<": " << binaryToDecimalMethod1(n) << endl;
//     return 0;
    
// }


// int binaryToDecimalMethod2(int n) {
//     int decimal=0;
//     int place=1;

//     while(n>0){
//         int bit = n & 1;
//         decimal = decimal + bit * place;
//         n = n>>1;
//         place = place * 2;
//     }
//     return decimal;
// }

// int main() {
//     int n;
//     int decimal=0;

//     cout << "Enter a binary no: ";
//     cin >> n;
//     cout << "Binary no: " << n << endl;
//     cout << "Binary To Decimal Conversion of " << n <<": " << binaryToDecimalMethod2(n) << endl;
//     return 0;
// }