#include<iostream>
using namespace std;
#include<string>

// SINGLE INHERITANCE

class Student{
protected:
    string gf;
public:
    int id;
    int age;
    string name;

    // ctor
    Student(int id,int age,string name,string gf){
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->gf = gf;
    }

    void study(){
        cout << name << " Studying" << endl;
    }
    void sleep(){
        cout << name << " Sleeping" << endl;
    }

    // dtor
    ~Student(){
        cout << "Student Default dtor called" << endl;
    }
};

class Student1 : public Student{
private:
    void chatting(){
        cout << name << " chatting with gf" << endl;
    }

public:
    // ctor
    Student1(int id, int age, string name, string gf) : Student(id, age, name, gf){
        cout << "Student1 ctor called" << endl;
    }

    // dtor 
    ~Student1(){
        cout << "Student1 dtor called" << endl;
    }

};

int main(){
    Student1 A(1,20,"Neha","Sam");
    cout << A.name << " " << A.id << " " << A.age << endl;
    // cout << A.gf << endl;   // not accessible
    A.sleep();
    A.study();
    // A.chatting();  // not accessible

    return 0;
}