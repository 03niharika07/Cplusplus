#include<iostream>
using namespace std;
#include<string>

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
        cout << "Vehicle Default dtor called" << endl;
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
};

int main(){
    Car A("Porsche","P11",4,4,"Manual");
    cout << A.name << endl;

    return 0;
}
