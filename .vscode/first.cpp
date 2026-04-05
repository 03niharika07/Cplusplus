#include <iostream>
using namespace std;


// int main() { 
//     cout<< "Namaste Dunia" <<endl;
//     cout<< "Niharika" << "\n";
//     cout<< "Learning C++\n";

//     int a = 3;
//     cout << a << endl;

//     float f = 1.7;
//     cout << f << endl;

//     char ch = 'q';     //store single character
//     cout << ch << endl;

//     bool bl = true;
//     cout << bl << endl;
     
//     double d = 8.98;
//     cout << d << endl;

//     cout << sizeof(a) << endl;
//     cout << sizeof(f) << endl;
//     cout << sizeof(ch) << endl;
//     cout << sizeof(bl) << endl;
//     cout << sizeof(d) << endl;

//     int a = 'a';        //type casting
//     cout << a << endl;

//     char ch = 98;
//     cout << ch << endl;

//     char ch1 = 123456;
//     cout << ch1 << endl;

    // unsigned int a = -123;  // unsigned- positive no.s
    // cout << a << endl;

//     unsigned int b = 112; // by default - signed
//     cout << b << endl;

//     int a = 2/5;
//     cout << a << endl;

//     int b = 2.0/5;
//     cout << b << endl;
//     cout << 2.0/5 << endl;

//     float c = 2.0/5;
//     cout << c << endl;

//     cout << 2.25/5 << endl;

//     int n1 = 3;
//     int n2 = 4; 
//     bool first = (n1==n2);
//     cout << first << endl;
//     cout << (n1>n2) << endl;
//     cout << (n1<n2) << endl;

//     int l1 = 21;
//     cout << !l1 << endl;   //returns 0
//     int l2 = 0;
//     cout << !l2 << endl;   //returns 1

// }


int main(){
    // CONDITIONS - IF ,ELSE,ELSE IF

    // int n;
    // cin >> n;
    // if ( n > 0 ){ 
    //     cout << "n is positive" << endl;
    // } 
    // else {
    //     cout << "n is negative" << endl;
    // }

    // int a,b;
    // cin >> a >> b;
    // cout << "First input:" << a << endl << "Second input:" << b << endl;
    // if ( a > b) {
    //     cout << "A is greater" << endl;
    // }
    // else {
    //     cout << "B is greater" << endl;
    // }

    // cin.get()
    // int a;
    // a = cin.get();
    // cout << "Input:" << a << endl;
    // if ( a > 0) {
    //     cout << "Greater" << endl;
    // }
    // else {
    //     cout << "Negative" << endl;
    // }

    // int a,b;
    // cout << "Enter first no" << endl;
    // cin >> a;
    // cout << "Enter second no." << endl;
    // cin >> b;
    // if ( a>b ) {
    //     cout << "A is greater" << endl;
    // }
    // if ( b>a ) {
    //     cout << "B is greater" << endl;
    // }

    // int a;
    // cout << "Enter a no." << endl;
    // cin >> a;
    // if ( a>0) {
    //     cout << "A is positive" << endl;
    // }
    // else {
    //     if( a<0) {
    //     cout << "A is negative" << endl;
    //     }
    //     else {
    //     cout << "A is zero" << endl;
    //     }
    // }
    // another method
    // int a;
    // cout << "Enter a no." << endl;
    // cin >> a;
    // if ( a>0) {
    //     cout << "A is positive" << endl;
    // }
    // else if ( a<0 ) {
    //     cout << "A is negative" << endl;
    // }
    // else {
    //     cout << "A is zero" << endl;
    //     }

    // int a=9;       //output - NINEYPOSITIVE 
    // if (a==9) {                   // if use else if then only NINEY 
    //     cout << "NINEY";         // if wli saari execute
    // }
    // if (a>0) {
    //     cout << "POSITIVE";
    // }
    // else{
    //     cout << "NEGATIVE";
    // }

    // int a = 2;
    // int b = a + 1;
    // if ((a=3)==b) {              // a is assigned 3 so a==3
    //     cout << a;
    // }
    // else {
    //     cout << a+1;
    // }

    // int a=24;          //output - Love24
    // if (a>20) {
    //     cout << "Love";
    // }
    // else if (a==24) {
    //     cout << "Lovely";
    // }
    // else {
    //     cout << "Babbar";
    // }
    // cout << a;

    // char ch;                //Uppercase, lowercase, digit check conditoh
    // cout << "Enter Character:";
    // cin >> ch;
    // if (ch>='a' && ch <='z') {
    //     cout << "This is Lowercase";
    // }
    // else if (ch>='A' && ch<='Z') {
    //     cout << "This is uppercase";
    // }
    // else if(ch>='0' && ch<='9') {
    //     cout << "This is numeric";
    // }


    // WHILE LOOP

    // int n,i=1;         // print no.s 1 to n
    // cin >> n;
    // while (i<=n) {
    //     cout << i << " ";
    //     i=i+1;
    // }

    // int n;                // sum of first n no.s
    // cin >> n;
    // int sum=0,i=1;
    // while (i<=n) {
    //     sum+=i;
    //     i=i+1;
    // }
    // cout << "Sum is:" << sum;

    // int n;                   // sum of even no.s from 1 to n
    // cout << "Enter a no:";
    // cin >> n;
    // int i=2, sum=0;
    // while (i<=n) {
    //     if (i%2==0) {
    //         sum+=i;
    //         i+=1;
    //     }  
    // }
    // cout << "Sum of even numbers is :" << sum;
    // return 0;
    
    // float fahrenheit;             // fahrenheit to celcius conversion
    // cin >> fahrenheit;
    // float celcius= (5.0/9)* (fahrenheit-32);
    // cout << fahrenheit <<" " << "Fahrenheit to celcius:" << celcius;
    // return 0;

    // int n;
    // cout << "Enter a no.";          // check prime or not
    // cin >> n;
    // int i=2;
    // while (i<n) {
    //     if (n%i==0) {
    //         cout << "Not prime";
    //         return 0;
    //     }
    //     else {
    //         i=i+1;
    //     }
    // }
    // cout << "Prime";
    // return 0;

    // int n;
    // cout << "Enter a no.";
    // cin >> n;
    // int i=2;
    // int prime_check =0;
    // while (i<n) {
    //     if (n%i==0) {
    //         prime_check =1;
    //         break;
    //     }
    //     else {
    //         i=i+1;
    //     }
    // }
    // if(prime_check == 0){
    //     cout<< "prime number";
    // }else{
    //     cout<<"not a prime number";
    // }
    // return 0;

    
}

    
    