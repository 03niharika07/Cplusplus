#include<iostream>
using namespace std;
#include<string>

class Student{

public: 
    // attributes 
    int id;
    string name;
    int age;
    int nos;

private:
    // attribute
    string gfName;
    float *gpa;

public:
    // ctor - Default ctor
    Student(){
        cout << "Student Default ctor called" << endl;
    }

    // Parameterised ctor
    Student(int id,int age,string name,int nos,float gpa,string gfName){
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gfName = gfName;
    }

    void study(){
        cout << "Studying" << endl;
    }

    void sleep(){
        cout << "Sleeping" << endl;
    }

    void bunk(){
        cout << "Bunking" << endl;
    }

    ~Student(){
        cout << "Student Default dtor called" << endl;
    }

private:
    // behaviour
    void chatting(){
        cout << "Chatting with gf" << endl;
    }
};

int main(){
    Student A(1,13,"Neha",6,9.5,"Namrita");
    cout << A.name << endl;
    // cout << A.gfName << endl;  // inaccessible
    // A.chatting();              // inaccessible
    A.study();
    A.bunk();
    A.sleep();
    cout << A.name << " " << A.age << " " << A.id << endl;
    
    return 0;
}

// Perfect Encapsulation : saare attributes hidden hojae , sbko private m daal dia
// But fir communication kse hoga