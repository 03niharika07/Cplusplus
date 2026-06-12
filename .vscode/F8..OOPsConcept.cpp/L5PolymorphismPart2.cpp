#include<iostream>
using namespace std;

// RUN-TIME POLYMORPHISM (dynamic)
// METHOD OVERRIDING

class Shape{
    public:
    void draw(){
        cout << "Generic Drawing..." << endl;
    }
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Circle Drawing.." << endl;
    }
};

class Rectangle : public Shape{
    public:
    void draw(){
        cout << "Rectangle Drawing..." << endl;
    }
};

int main(){

    Circle C;
    C.draw();

    Rectangle R;
    R.draw();

    return 0;
}