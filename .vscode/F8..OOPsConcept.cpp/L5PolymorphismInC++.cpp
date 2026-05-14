#include<iostream>
using namespace std;
#include<vector>

// COMPILE TIME POLYMORPHISM (STATIC)
// METHOD OVERLOADING : Overloading occurs when a class contains multiple methods sharing a name but differing in argument count or argument type.

// 1. FUNCTION OVERLOADING

class Add{
    public:

    // default ctor
    Add(){
        cout << "Default ctor called" << endl;
    }

    // x, y, two int addition
    int sum(int x, int y){
        cout << "Sum of 2 int : " << endl;
        return x+y;
    }

    // x, y, z, three int addition
    int sum(int x, int y, int z){
        cout << "Sum of 3 int : " << endl;
        return x+y+z;
    }

    // x, y, double addition
    double sum(double x, double y){
        cout << "Sum of 2 double : " << endl;
        return x+y;
    }

    int sum(int arr[],int size){
        cout << "Sum of array elements : " << endl;
        int sum = 0;
        for(int i=0; i<size; i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    int sum(vector<int> arr, int size){
        cout << "Sum of vector array elements : " << endl;
        int sum = 0;
        for(int i=0; i<size; i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    // destructor dtor
    ~Add(){
        cout << "Default dtor called" << endl;
    }
};

// 2. OPERATOR OVERLOADING

class Complex{
    public:

    // attributes
    int real;
    int imag;

    // default ctor
    // This is used when we create object without giving values
    Complex(){
        real = imag = -1;
    }

    // parameterised ctor
    // constructor initializer list is used
    // This is used when we create object with values
    Complex(int r, int i): real(r),imag(i){};

    void print(){
        printf("[%d + i%d]\n", this->real, this->imag);
    }

    // syntax
    // Ret_type operator <op> (args){
    //     code
    //     return<>
    // }

    Complex operator + (const Complex &B){         // A.fun(B)
        // this -> A instance
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    Complex operator - (const Complex &B){
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }

    bool operator == (const Complex &B){
        return (this->real == B.real) && (this->imag == B.imag) ;
    }
 
};

int main(){

    // Function Overloading
    Add a;
    cout << a.sum(3,4) << endl;
    cout << a.sum(3.40 , 6.10) << endl;
    cout << a.sum(2,3,4) << endl;

    int arr[] = {1,23,3};
    int size1 = 3;
    cout << a.sum(arr,size1) << endl;

    vector<int> brr = {1,2,3,4,50};
    int size2 = 5;
    cout << a.sum(brr,size2) << endl;

    cout << endl;

    // Operator Overloading
    Complex c1(5,6);
    c1.print();
    Complex c2(3,3);
    c2.print();

    Complex C = c1 + c2;    // shows error, + operator ko ye nhi pta ki 2 complex number ko kse plus krte h
    // without operator overloading , error aaega
    C.print();

    Complex D = c1 - c2;
    D.print();

    // 2 complex no.s are equal
    bool ans = c1 == c2;
    cout << ans << endl;

    return 0;
}