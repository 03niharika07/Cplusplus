#include<iostream>
using namespace std;
#include<string>

class Student{

    // Attributes
    int id;
    string name;
    int rno;
    int nos;  //number of subjects

    // Behaviour
    void study(){
        cout << this->name << "Studying" << endl;
    }

    void sleep(){
        cout << this->name << "Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << "Bunking" << endl;
    }
};

// this keyword - points to the current object, refers to the current object of a class

int main(){


    return 0;
}