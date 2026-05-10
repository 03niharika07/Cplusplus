#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    // Attributes
    string name;
    string color;

    //ctor
    Animal(string n,string c){
        cout << "Animal Parameterised ctor called" << endl;
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
        cout << "Animal Default dtor called" << endl; 
    }
};

class Dog : public Animal{
public:
    // Attributes
    int noOfLegs;

    // ctor
    Dog(string name,string color,int noOfLegs) : Animal(name,color){
        cout << "Dog Parameterised ctor called" << endl;
        this->noOfLegs = noOfLegs;
    }

    // methods 
    void bark(){
        cout << name << " Barking" << endl;
    }

    // Default dtor
    ~Dog(){
        cout << "Dog Default dtor called" << endl;
    }
};

int main(){
    // When the access specifier is public in derived class 
    // All accessible
    Dog D("Chiku","Black",4);
    cout << D.name << endl;
    D.bark();
    D.sleep();
    D.eat();
    cout << D.color << endl;

    return 0;

}

// OUTPUT 

// Animal Parameterised ctor called
// Dog Parameterised ctor called
// Chiku
// Chiku Barking
// Chiku Sleeping
// Chiku Eating
// Black
// Dog Default dtor called
// Animal Default dtor called