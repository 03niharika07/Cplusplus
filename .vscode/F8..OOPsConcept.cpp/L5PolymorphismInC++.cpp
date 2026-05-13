#include<iostream>
using namespace std;

// Method Overloading : Overloading occurs when a class contains multiple methods sharing a name but differing in argument count or argument type.

class Add{
    public:

    // default ctor
    Add(){
        cout << "Default ctor called" << endl;
    }

    // x, y, two int addition
    int sum(int x, int y){
        return x+y;
    }

    // x, y, z, three int addition
    int sum(int x, int y, int z){
        return x+y+z;
    }

    // x, y, double addition
    double sum(double x, double y){
        return x+y;
    }

    int sum(int arr[],int size){
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

int main(){

    Add a;
    cout << a.sum(3,4) << endl;

    return 0;
}