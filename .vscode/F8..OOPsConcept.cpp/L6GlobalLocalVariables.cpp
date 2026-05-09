#include<iostream>
using namespace std;

int a = 3;  // GLOBAL VARIABLE
int b = 9;

void fun(){
    int b = 190;
    ::b = 98;
    cout << b << endl;
    cout << ::b << endl;
}

int main(){
    int a = 10;  // LOCAL VARIABLE (local to main() func)

    cout << ::a << endl;  // If same variable declared as local and global , then use :: (Scope Resolution Operator) to distinguish

    ::a = 5;
    cout << ::a << endl;

    cout << a << endl;

    int b = 8;   // LOCAL VARIABLE
    cout << b << endl;   // Always execute the value of nearest local variable 

    {
        int b = 30;  // LOCAL VARIABLE
        {
            int b = 100;  // LOCAL VARIABLE
            cout << b << endl;
        }
        cout << b << endl;
        cout << ::b << endl;
    }

    fun();

    return 0;
}