#include<iostream>
using namespace std;
#include<string>

// base calss k attribute ko protected bna dia, accessible hoga child class m but ab access specifier ko bhi protected krdia
// protected lenge access specifier toh fir saara data child class ka protected bn jaega
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

class Dog : protected Animal{
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
};


int main(){
    Dog A ("Chiku","Black",4);
    // A.sleep(); // not accesible kyuki ye chiz public thi base class m but usko humne protected ki tarh inherit kraya toh protected bn gyi
    // A.eat();
    // cout << A.name << " " << A.color << " " << endl;  // Not accessible , sb protected bn gya

    cout << A.noOfLegs << endl;
    A.bark();
    
    return 0;
}