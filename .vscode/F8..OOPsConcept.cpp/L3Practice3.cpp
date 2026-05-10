#include<iostream>
using namespace std;
#include<string>

// Base class k ek variable ko protected bna dia , child class m accessbile hoga , access specifier public h, mtlb publically inherit krre
class Animal{
protected:
    string name;

public:
    // Attributes
    string color;

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
        cout << "Animal Default dtor called" << endl; 
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
        cout << name << " Barking" << endl;   // name is private , will show error, need to use getter setter
    }

    // default dtor
    ~Dog(){
        cout << "Dog default dtor called" << endl;
    }
};


int main(){
    Dog D ("Chiku","Black",4);
    cout << D.color << endl;
    // cout << D.name << endl; // Not accessible
    Animal A("Dog","White");
    // cout << A.name << endl;  // name will not be accessible because it is protected 

    return 0;
}

// OUTPUT 

// I am inside Animal Class
// I am inside Dog class
// Black
// I am inside Animal Class          // ctor call hua kyuki main m animal se object bnaaya
// Animal Default dtor called
// Dog default dtor called
// Animal Default dtor called
