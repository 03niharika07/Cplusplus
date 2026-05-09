#include<iostream>
using namespace std;
#include<string>

class Car{
public:
    // ctor - Default ctor
    Car(){
        cout << "Car Default ctor called" << endl;
    }

    // ctor - Parameterised ctor
    Car(int speed,string color,string brand){
        cout << "Car Parameterised ctor called" << endl;;
        this->speed = speed;
        this->color = color;
        this->brand = brand;
    }

    // Copy ctor
    Car(const Car &srcobj){
        cout << "Car Copy ctor called" << endl;
        this->speed = srcobj.speed;
        this->color = srcobj.color;
        this->brand = srcobj.brand;
    }

    // attributes
    int speed;
    string color;
    string brand;

    // behavior/methods/functions
    void start(){
        cout << this->brand << " started" << endl;
    }

    void accelerate(){
        cout << this->brand << " accelerated" << endl;
    }

    void stop(){
        cout << this->brand << " stopped" << endl;
    }

    // dtor - Destructor
    ~Car(){
        cout << "Car Default dtor called" << endl;
    }
};

int main(){
    // // 1. Default ctor
    // Car A;
    // A.speed = 30;
    // A.color = "Black";
    // A.brand = "Porsche";

    // A.start();
    // A.accelerate();
    // A.stop();

    // Car B;
    // B.speed = 20;
    // B.color = "Green";
    // B.brand = "Ferrari";

    // B.stop();
    // B.start();
    // B.accelerate();

    // // 2. Parameterised ctor
    // Car C(30,"Red","Lamborghini");
    // cout << C.brand << " " << C.color << endl;
    // C.accelerate();

    // // Copy ctor
    // Car D(30,"Orange","Maruti Suzuki");
    // Car E(D);
    // cout << E.color << " " << D.color << endl;

    // // dynamic memory allocator or car pointer 
    // Car *C = new Car(20,"Grey","Porsche");
    // cout << C->color << " " << C->brand << endl;
    // C->start();
    // C->accelerate();
    // C->stop();
    // // khud se delete krn apdega
    // delete C;



    return 0;
}
