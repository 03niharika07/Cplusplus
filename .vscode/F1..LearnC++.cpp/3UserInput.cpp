// #include<iostream>
// using namespace std;

// int main() {
    // int age;       // variable declaration
    // cout << "Enter your age : ";
    // cin >> age;    // input le rha h yha
    // cout << "Your age is: " << age << endl;

    // int marks;
    // cout << "Enter your marks" << endl;
    // cin >> marks;
    // cout << "Your marks: " << marks <<endl;

    // float weight;
    // cout << "Enter your weight: ";
    // cin >> weight;
    // cout << "Your weight is: " << weight << endl;

    // double weight;
    // cout << "Enter your weight: ";
    // cin >> weight;
    // cout << "Your weight is: " << weight << endl;

    // char marks;
    // cout << "Enter your marks" << endl;
    // cin >> marks;
    // cout << "Your marks: " << marks <<endl;

    // bool marks;
    // cout << "Enter your marks" << endl;
    // cin >> marks;   // input m kbhi bhi true ya false krke nhi lete , 0 ya 1 se lenge
    // cout << "Your marks: " << marks <<endl;

//     int marks;
//     cout << "Enter your marks: ";
//     cin.ignore() = marks;
//     cout << "Your marks is: " << marks << endl;
//     return 0;
// }


// use of getline(cin,str)

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // string name;
//     // cout << "Enter your name: ";
//     // cin >> name;  //When you use cin >> to read a string, it stops reading as soon as it encounters whitespace (such as a space, tab, or newline).
//     // cout << "Hello, " << name << endl;

//     string name;
//     cout << "Enter your name: ";
//     getline(cin,name);
//     cout << "Hello, " << name << endl;
//     return 0;

// }


// #include <iostream>
// #include <string>

// int main() {
//     int age;
//     std::string name;

//     std::cout << "Enter your age: ";
//     std::cin >> age;
//     std::cin.ignore();  // clear the newline character

//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);

//     std::cout << "Name: " << name << ", Age: " << age << std::endl;
//     return 0;
// }