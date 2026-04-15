#include<iostream>
using namespace std;

int main(){

    // FLOWCHART + PSEUDOCODE

    // 1. SUM OF TWO NUMBERS 
    // Flowchart : start (terminator) -> read a,b (input/output block) -> sum = a+b (process block) -> print sum (input/output) -> end (oval-terminator)
    // Pseudocode : start, input a,b, sum = a+b, print sum, end

    int a,b;
    int sum = 0;
    cout << "Enter value of a & b: " << endl;
    cin >> a;
    cin >> b;

    sum = a+b;
    cout << "Sum : " << sum << endl;

    cout << endl;

    // 2. AVERAGE OF THREE NUMBERS
    // Flowchart : start (oval) -> read a,b,c (input/output) -> avg=(a+b+c)/3 (process) -> print avg (input/output) -> end (oval)

    int c,d,e;
    cout << "Enter values : " << endl;
    cin >> c;
    cin >> d;
    cin >> e;

    int avg = (c+d+e)/3;
    cout << "Average : " << avg << endl;

    cout << endl;

    // 3. HALF OF A NUMBER
    // Flowchart : start (oval) -> read a (input/output) -> a=a/2 (process) -> print a (input/output) -> end (terminator)

    int num;
    cout << "Enter the number : " << endl;
    cin >> num;

    num = num/2;
    cout << "Half : " << num << endl;

    cout << endl;

    // 4. AREA OF RECTANGLE
    // Flowchart : start (terminator) -> read l,b (input/output) -> area = l*b (process) -> print area (input/output) -> end (terminator)

    int length,breadth;
    cout << "Enter length and breadth respectively : " << endl;
    cin >> length;
    cin >> breadth;

    int area = length*breadth;
    cout << "Area : " << area << endl;

    cout << endl;
     


    return 0;
}