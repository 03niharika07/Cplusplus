#include<iostream>
using namespace std;

int main() {

    // IMPLICIT TYPE CASTING/CONVERSION

    // char to int 
    // int a = 'a';
    // cout << a << endl;

    // int b = 'a'; // char to int
    // int c = 7;
    // cout << b+c << endl;

    // int to char 
    // char ch = 122;
    // cout << ch << endl;

    // // char to float
    // double f = 'a';
    // cout << f << endl;

    // int num1 = 23;
    // float num2 = 5.5;
    // float result = num1 + num2;   // data complete
    // int result2 = num1 + num2;  // data incomplete
    // cout << result << endl;
    // cout << result2 << endl;

    // char c = 'a';
    // char result = c + 1;  // a=65 , 65+1=66 = b
    // cout << result << endl;

    // char ch = 'a';
    // int result2 = ch + 1;
    // cout << result2 << endl;


    // EXPLICIT TYPE CONVERSION 

    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + (int)num2;
    // cout << result << endl;

    // double to int
    // double pi = 3.1415926;
    // cout << (int)pi << endl;

    // float to char
    // float f = 65.35;    // char is stored as int, precision chor dega , 65 hojaega, return krega A
    // cout << (char)f << endl;

    //int to float
    // int a = 10;
    // int b = 3.0;
    // cout << (float)(a/b) << endl;   // int/int = int
    // cout << (float)(a/(float)b) << endl;  // int/flaot = float
    // cout << (float)((float)a/b) << endl; // float/int = float


    // using static cast
    // int a = 65;
    // cout << static_cast<char>(a) << endl;


    // return 0;
}