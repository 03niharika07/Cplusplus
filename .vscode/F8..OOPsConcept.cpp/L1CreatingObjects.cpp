#include<iostream>
using namespace std;
#include<string>

class Student{
public:
    // ctor - constructor (default)
    Student(){
        cout << "Student default ctor called" << endl;
    }

    // ctor - Parameterised ctor
    Student(int id, int age, string name, int nos, float gpa){
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
    }

    // copy ctor 
    Student(const Student &srcobj){                     // srcobj => A
        cout << "Student copy ctor called" << endl;
        this->id = srcobj.id;                                  // this => C
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Attributes/properties
    int id;
    int age;
    string name;
    int nos;  //number of subjects
    float *gpa;

    // Behaviour/Methods/Functions
    void study(){
        cout << this->name << " Studying" << endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << " Bunking" << endl;
    }    

    // dtor - destructor
    ~Student(){
        cout << "Student default dtor called" << endl;
        delete this->gpa;
    }
};

// this keyword - points to the current object, refers to the current object of a class

int main(){
    // 1. Default ctor

    // create hua fir destroy hogya
    // Student A;
    // A.id = 1;
    // A.age = 13;
    // A.name = "Neha";
    // A.nos = 6;

    // A.study();

    // Parameterised ctor

    // Student A(1,15,"Neha",6);
    // Student B(2,34,"Namrita",7);

    // A.bunk();
    // B.sleep();

    // cout << A.name << " " << A.age << endl;

    // // Copy ctor
    // Student A(1,15,"Neha",6);    // ye stack m define hua hoga  // STACK ALLOCATION
    // Student C = A; // or Student C(A);

    // cout << C.name << " " << A.name << endl;

    // Dynamic memory allocation krne k liye ya student pointer  // HEAP ALLOCATION
    Student *A = new Student(1,23,"Neha",4,9.8);
    cout << A->name << " " << A->age << endl;
    A->study(); 
    // dynamic m khud se destructor call nhi hota hume krna pdega
    delete A;

    return 0;
}