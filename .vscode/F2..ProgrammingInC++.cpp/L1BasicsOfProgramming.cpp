#include<iostream>
using namespace std;

int main(){

    // FLOWCHART + PSEUDOCODE

    // 1. SUM OF TWO NUMBERS 
    // Flowchart : start (terminator) -> read a,b (input/output block) -> sum = a+b (process block) -> print sum (input/output) -> end (oval-terminator)
    // Pseudocode : start, input a,b, sum = a+b, print sum, end

    // int a,b;
    // int sum = 0;
    // cout << "Enter value of a & b: " << endl;
    // cin >> a;
    // cin >> b;

    // sum = a+b;
    // cout << "Sum : " << sum << endl;

    // cout << endl;


    // 2. AVERAGE OF THREE NUMBERS
    // Flowchart : start (oval) -> read a,b,c (input/output) -> avg=(a+b+c)/3 (process) -> print avg (input/output) -> end (oval)

    // int c,d,e;
    // cout << "Enter values : " << endl;
    // cin >> c;
    // cin >> d;
    // cin >> e;

    // int avg = (c+d+e)/3;
    // cout << "Average : " << avg << endl;

    // cout << endl;


    // 3. HALF OF A NUMBER
    // Flowchart : start (oval) -> read a (input/output) -> a=a/2 (process) -> print a (input/output) -> end (terminator)

    // int num;
    // cout << "Enter the number : " << endl;
    // cin >> num;

    // num = num/2;
    // cout << "Half : " << num << endl;

    // cout << endl;


    // 4. AREA OF RECTANGLE
    // Flowchart : start (terminator) -> read l,b (input/output) -> area = l*b (process) -> print area (input/output) -> end (terminator)

    // int length,breadth;
    // cout << "Enter length and breadth respectively : " << endl;
    // cin >> length;
    // cin >> breadth;

    // int area = length*breadth;
    // cout << "Area : " << area << endl;

    // cout << endl;


    // 5. CALCULATE PERCENTAGE
    // Flowchart : start (terminator) -> read sub1,sub2,sub3,sub4 (input/output) -> add=sub1+sub2+sub3+sub4 (process) -> total = 400 (process) -> percentage = (add/total)*100 (process) -> print percentage (input/output) -> end (oval)
     
    // float sub1,sub2,sub3,sub4;
    // cout << "Enter marks : " << endl;
    // cin >> sub1;
    // cin >> sub2;
    // cin >> sub3;
    // cin >> sub4;

    // float add = sub1 + sub2 + sub3 + sub4;
    // float total = 400;
    // float percentage = (add/total)*100;
    // cout << "Percentage : " << percentage << endl;

    // cout << endl;


    // 6. CHECK POSITIVE,NEGATIVE OR ZERO
    // Flowchart : start (terminator) -> read num (input/output) -> is num ==0 ? (decision box-diamond)
    // if yes, print Zero (input/output) -> end (terminator)
    // if no, is num >0 ? (decision box - diamond)
    // if yes, print positive (input/output) -> end (terminator)
    // if no, print negative (input/output) -> end (terminator)

    // int n;
    // cout << "Enter a no. : " << endl;
    // cin >> n;

    // if(n == 0){
    //     cout << "Zero" << endl;
    // }
    // else if(n > 0){
    //     cout << "Positive" << endl;
    // }
    // else{
    //     cout << "Negative" << endl;
    // }

    // cout << endl;


    // 7. CALCULATE PERCENTAGE 2
    // Flowchart : start (terminator) -> read s1,s2,s3,s4,s5 (input/output) -> sum=s1+s2+s3+s4+s5 (process) -> total=500 (process) -> percentage=(sum/total)*100 (process) -> print percentage (input/output) -> is percentage > 90 (decision - diamond)
    // if yes, print grade A -> end
    // if no, is percentage >80 and <90 ?
    // if yes, print grade B -> end
    // if no, is percentage >70 and <80 ?
    // if yes, print grade C -> end
    // if no, print fail -> end

    // float s1,s2,s3,s4,s5;
    // cout << "Enter marks of 5 subjects : " << endl;
    // cin >> s1;
    // cin >> s2;
    // cin >> s3;
    // cin >> s4;
    // cin >> s5;

    // float sum2 = s1+s2+s3+s4+s5;
    // float total2 = 500;

    // float percentage2 = (sum2/total2)*100;
    // cout << "Percentage : " << percentage2 << endl;

    // if(percentage2 > 90){
    //     cout << "Grade : A" << endl;
    // }
    // else if(percentage2 >80 && percentage2 <90){
    //     cout << "Grade : B" << endl;
    // }
    // else if(percentage2 >70 && percentage2 <80){
    //     cout << "Grade : C" << endl;
    // } 
    // else{
    //     cout << "Fail" << endl;
    // }

    // cout << endl;


    // 8. PRINT NAME 5 TIMES
    // Flowchart : start (terminator) -> read name,n (input/output) -> limit=n (process) -> limit!=0 (decision-diamond) <---|
    // if yes, print name (input/output) -> limit=limit-1 (process) --------------------------------------------------------
    // if no, end (terminator)

    // string name;
    // int n1;
    // cout << "Enter limit : " << endl;
    // cin >> n1;
    // cout << "Enter name : " << endl;
    // cin >> name;

    // int limit = n1;

    // while(limit != 0){
    //     cout << name << endl;
    //     limit = limit - 1;
    // }

    // cout << endl;


    // 9. PRINT COUNTING FROM 1 TO N
    // Flowchart : start (terminator) -> read N (input/output) -> i=1 (process) -> i<=N ? (decision-diamond) <-----|
    // if yes, print i (input/output), i=i+1 (process) ------------------------------------------------------------
    // if no, end (terminator)

    // int N;
    // cout << "Enter N : " << endl;
    // cin >> N;

    // for(int i=1; i<=N; i++){
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << endl;


    // 10. ADD N NUMBERS FROM USERS
    // Flowchart : start (terminator) -> read n (input) -> i=1, sum=0 (process) -> i<=n (decision) <--|
    // if yes, read num (input) -> sum=sum+num (process) -> i=i+1 (process) --------------------------
    // if no, print sum(output) -> end (terminator)

    // int N;
    // cin >> N;
    // int num;
    // int sum = 0;

    // for(int i=1; i<=N; i++){
    //     cin >> num;
    //     sum = sum+num;
    // }
    // cout << "Sum : " << sum << endl;

    // cout << endl;
    

    // 11. PRINT EVEN NUMBERS FROM 1 TO N
    // Flowchart : start (terminator) -> read N (input) -> i=2 (process) -> i<=N (decision) <--|
    // if yes, i%2 == 0 (decision), if yes, print i (output), i=i+1 (process) -----------------, if no, end(terminator)
    // if no, end (terminator)

    int N;
    cin >> N;
    int i=2;

    while(i <= N){
        if(i%2 == 0){
            cout << i << " ";
        }
        i=i+1;
    }
    cout << endl;

    cout << endl;



    return 0;
}