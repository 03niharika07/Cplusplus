#include <iostream> 
using namespace std;

// // function
// void printMyName(){
//     cout << "Niharika" << endl;
// }

// int main() {
//     // function call
//  printMyName( );
//  return 0;
// }



// Create function to check whether the no. is even or odd

// void checkEvenOdd (int n) {       // parameter
//     if (n%2==0){
//         cout << "Number is even" << endl;
//     } else {
//         cout << "Number is odd" << endl;
//     }
// }

// int main() {
//     checkEvenOdd(9); // argument
//     checkEvenOdd(10);
//     return 0;
// }



// Create a function to check whether the number is positive or negative

// void checkPositiveOrNegative (int num){
//     if( num > 0){
//         cout << "Positive no." << endl;
//     } else if (num < 0) {
//         cout << "Negative no." << endl;
//     } else {
//         cout << "Zero" << endl;
//     }
// }

// int main() {
//     checkPositiveOrNegative(71798);
//     checkPositiveOrNegative(-3678);
//     checkPositiveOrNegative(0);
//     return 0;
// }



// Create a function to print counting from 1 to N

// void printCounting(int n){
//     for(int i=1; i<=n; i++){
//         cout << i << " ";
//     }
// }

// int main(){
//     printCounting(10);
//     return 0;
// }



// Create a function to find average

// non-void (store krana pdega phle , output dera hai)
// int printAverage(int a, int b){
//     int average = (a+b)/2;
//     return average;
// }

// int main(){
//     int ans1 = printAverage(3,3);
//     cout << "Average is:" << ans1 << endl;
//     int ans2 = printAverage(6,5);
//     cout << "Average is:" << ans2 << endl;
//     return 0;
// }

// void
// void printAverage(int a, int b, int c){
//     int average = (a+b+c)/3;
//     cout << average << endl;
// }

// int main(){
//     printAverage(10,20,30);
//     return 0;
// }



// Create a function to print table of 2

// void printTable (int n){
//     for(int i=1; i<=10; i++ ){
//         cout << n << " X " << i << " = " << i*n << endl;
//     }
// }
// int main(){
//     printTable(2);
//     cout << endl;
//     printTable(5);
//     return 0;
// }



// Create a function to convert char to upper case and vice versa

// void convertToUpperCase(char ch){
//     char ans = ch -'a' + 'A';
//     cout << "Upper case character: " << ans << endl;
// }
                                                                           // mistake- A-'A' +'a', B-'B'+'b' (ye nhi krna)
// void convertToLowerCase(char ch){
//     char ans = ch -'A'+ 'a';
//     cout << "Lower case character: " << ans << endl;
// }

// int main(){
//     convertToUpperCase('t');
//     convertToLowerCase('M');
//     return 0;
// }




// Pass by value (copy bnegi) and Pass by reference (actual value m change)

// Pass by value 
// void print(int a){              // value receive                         
//     cout << a << endl;
//     a++;                        // a++ : post-increment -> phle print hoga uske baad update hoga
//     a++;                        // ++a : pre-increment -> phle update hoga fir print hoga 
//     a++;
//     cout << a;
//     a--;
// }

// int main(){
//     int a = 5;                   // Initially a=5 
//     a++;                         // a=6
//     cout << a << endl;           // 6
//     print(a);  // value pass
//     cout << endl;                // function: 6, a++(7),a++(8),a++(9), 9, a--(8)
//     cout << a << endl;           // 6
// }

// Pass by reference

// void print(int &a){             // reference variable
//     cout << a << endl;
//     a++;
//     a*=2;
//     a*=2;
//     a++;
//     return;
// }
// int main(){
//     int a = 5;                 // Initially 5
//     a++;                       // a=6
//     cout << a << endl;         // 6
//     print(a);                  // function(actual value m change hoga): 6, a++(7), a*=2(14), a*=2(28), a++(29), will return 29 (print nhi kra rha)
//     cout << a << endl;         // 29
// }


// Example - Pass by value

// void modify (int a){
//     a = a + 10;
// }

// int main(){
//     int n = 5;                 //Initially n is 5
//     modify(n);                 // function m receive hui value: a = 15
//     cout << n;                 // print hogi actual value which is 5
// }


// Example - Pass by reference

// void modify (int &a){
//     a = a + 10;
// }

// int main(){
//     int n = 5;                 //Initially n is 5
//     modify(n);                 // function m receive hui value: a = 15
//     cout << n;                 // print hogi value, actual value m changes hue, print hoga 15
// }


// Example

// void print(int a, int &b){
//     a = a * 10;
//     b = b + 10;
// }

// int main(){
//     int a = 5; 
//     int b = 10;
//     print(a, b);                  // a ki copy bnegi, b mai actual value m changes hogi
//     cout << a << " " << b;        // a = 5, b = 20
// }

