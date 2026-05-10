#include<iostream>
#include<string> 
using namespace std;

// UNDERSTANDING MODE OF INHERITANCE

// Base class m ek attribute ko private bna dia , child class m usko inherit krne k liye getter setter ka use krenge
class Animal{
private:
    string name;

public:
    // Attributes
    string color;

    string getName(){
        return this->name;
    }

    //ctor
    Animal(string n,string c){
        cout << "I am inside Animal Class" << endl;
        this->name = n;
        this->color = c;
    }

    // methods
    void sleep(){
        cout << name << " Sleeping" << endl;
    }

    void eat(){
        cout << name << " Eating" << endl;
    }

    // Default dtor
    ~Animal(){
        cout << "I am inside Animal dtor" << endl; 
    }
};

class Dog : public Animal{
public:
    // Attributes
    int noOfLegs;

    // ctor
    Dog(string name,string color,int noOfLegs) : Animal(name,color){
        cout << "I am inside Dog class" << endl;
        this->noOfLegs = noOfLegs;
    }

    // methods 
    void bark(){
        cout << getName() << " Barking" << endl;   // name is private , will show error, need to use getter setter
    }

    // Default dtor
    ~Dog(){
        cout << "I am inside Dog dtor" << endl;
    }
};


int main(){
    Dog A ("Chiku","Black",4);
    cout << A.color << endl;
    return 0;
}

// OUTPUT 

// I am inside Animal Class
// I am inside Dog class
// Black
// I am inside Dog dtor
// I am inside Animal dtor