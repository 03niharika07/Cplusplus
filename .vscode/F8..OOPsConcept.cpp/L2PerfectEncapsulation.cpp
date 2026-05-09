#include<iostream>
using namespace std;
#include<string>

// Perfect Encapsulation : saare attributes hidden hojae , sbko private m daal dia
// But fir communication kse hoga

// kuch bhi chnage krne se phle ek security layer hogi 
// getter setter method

class Student{
private:
    int id;
    int age;
    string name;
    int nos;

    float *gpa;
    string gf;

public :

    // Getter setter
    // kisi fucntion k through access krre hai

    // For gpa
    void setGpa(float a){
        *this->gpa = a;
    }

    float getGpa() const{
        return *this->gpa;
    }

    // For age
    int getAge() const{
        return age;
    }

    // For id
    void setId(int a){
        this->id = a;
    }

    int getId() const{
        return this->id;
    }

    // For name
    void setName(string a){
        this->name = a;
    }

    string getName() const{
        return this->name;
    }

    // Default ctor
    Student(){
        cout << "Student Default ctor called" << endl;
    }

    // Parameterised ctor
    Student(int id,int age,string name,int nos,float gpa,string gf){
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // Behavior
    void study(){
        cout << this->name << " Studying" << endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << " Bunking" << endl;
    }

    // Defaut dtor - destructor
    ~Student(){
        cout << "Student Default dtor called" << endl;
    }

private:
    void chatting(){
        cout << this->name << "Chatting with gf" << endl;
    }
};

int main(){
    Student A(1,20,"Sam",6,8.9,"Neha");
    cout << A.getAge() << endl;

    cout << A.getGpa() << endl;
    A.setGpa(9.8);
    cout << A.getGpa() << endl;

    cout <<A.getName() << endl;
    A.setName("Sambhav");
    cout << A.getName() << endl;

    cout << A.getId() << endl;

    return 0;
}