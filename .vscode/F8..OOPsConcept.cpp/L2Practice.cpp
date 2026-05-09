#include<iostream>
using namespace std;

class Animal{

private:
    string owner;

public:
    string name;
    string color;
    string breed;

public:

    // getter setter for owner name
    string getOwner() const{   // for printing
        return owner;
    }
    void setOwner(string a){   // for modification
        owner = a;
    }

    // Default ctor
    Animal(){
        cout << "Animal Default ctor called" << endl;
    }

    // Parameterised ctor 
    Animal(string n,string c,string b,string o){
        cout << "Animal Parameterised ctor called" << endl;
        name = n;
        color = c;
        breed = b;
        owner = o;
    }

    // Behavior 
    void bark(){
        cout << this->name << " Barking" << endl;
    }

    void moew(){
        cout << this->name << " Meow" << endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    // Default stor
    ~Animal(){
        cout << "Animal Default dtor called" << endl;
    }

private:
    void playing(){
        cout << this->name << " Playing with Owner" << endl;
    }
};

int main(){
    Animal A("Dog","brown","German Shephard","Neha");
    cout << A.name << endl;
    // cout << A.owner << endl;  // inaccessible

    A.bark();
    A.sleep();
    // A.playing();  // inaccessible

    cout << A.getOwner() << endl;
    A.setOwner("Niharika");
    cout << A.getOwner() << endl;

    return 0;
}