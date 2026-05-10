#include<iostream>
using namespace std;
#include<string>

// MULTILEVEL INHERITANCE

class Vehicle{       // BASE CLASS
public:

    // attributes
    string name;        // agr m string ko private bnadu toh voh child class m inherit nhi hoga , usko access krne k liye getter setter use krna pdega
    string model;       // but agr m string ko protected bnadu toh voh protected ki tarah hi inherit hoga child class m aur access bhi hoga child class m
    int noOfTyres;      // but protected aur private dono hi main func m accessible nhi honge

    // Parameterised ctor
    Vehicle(string name,string model, int noOfTyres){
        cout << "I am inside vehicle ctor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    // behavior/methods/functions
    void start_engine(){
        cout << this->name << "Started" << endl;
    }

    void stop_engine(){
        cout << this->name << "Stopped" << endl;
    }

    // DEfault dtor
    ~Vehicle(){
        cout << "I am inside vehicle dtor" << endl;
    }
};

class Car : public Vehicle{
public:

    // attributes
    int noOfDoors;
    string TransmissionType;

    // ctor
    Car(string name,string model, int noOfTyres,int noOfDoors,string TransmissionType):Vehicle(name,model,noOfTyres){
        cout << "I am inside Car ctor" << endl;
        this->noOfDoors = noOfDoors;
        this->TransmissionType = TransmissionType;
    }

    // behaviors
    void startAC(){
        cout << this->name << "AC started" << endl;
    }

    // Default dtor
    ~Car(){
        cout << "I am inside car dtor" << endl;
    }
};

class Bike : public Vehicle{
public:

    // attributes
    string handleBarStyle;
    string suspensionType;

    // ctor
    Bike(string name, string model, int noOfTyres, string handleBarStyle,string suspensionType):Vehicle(name,model,noOfTyres){
        cout << "I am inside bike ctor" << endl;
        this->handleBarStyle = handleBarStyle;
        this-> suspensionType = suspensionType;
    }

    // behavior
    void wheeling(){
        cout << this->name << "Wheeling" << endl;
    }

    // Default dtor
    ~Bike(){
        cout << "I am inside Bike dtor" << endl;
    }
};

int main(){
    Car A("Porsche","P11",4,4,"Manual");
    cout << A.name << endl;
    A.start_engine();
    A.stop_engine();
    A.startAC();

    Bike B("Royal Enfield","R182",2,"Gripped","XYZ");
    B.start_engine();
    B.wheeling();
    B.stop_engine();

    return 0;
}

// OUTPUT

// I am inside vehicle ctor        // Base class ka constructor call hoga phle
// I am inside Car ctor            // fir derived class ka constructor call hoga
// Porsche
// PorscheStarted
// PorscheStopped
// PorscheAC started
// I am inside vehicle ctor        // Nayi derived class bnri, firse phle base calss ka constructor call hoga
// I am inside bike ctor           // fir derived class ka constructor call hoga
// Royal EnfieldStarted
// Royal EnfieldWheeling
// Royal EnfieldStopped
// I am inside Bike dtor           // Derived class ka dtor phle call hoga
// I am inside vehicle dtor
// I am inside car dtor
// I am inside vehicle dtor
