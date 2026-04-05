#include <iostream>
using namespace std;

// global variable (Variables declared outside any function and accessible anywhere within the code file.)
int a = 5;  

int main(){
    // local variable (Variables declared within a function, accessible only within that function.)
    int b = 6;
    {
        // block-scope variable (Variables declared within a specific block (e.g., within {}), usable solely within that block.)
        int c = 7;
        cout << c << endl;
    }
    cout << a << endl;
    cout << b << endl;
    // cout << c << endl; // will show error - not declared in this scope
    return 0;
}

// By managing scopes effectively, we maintain code clarity, reduce errors, and enhance maintainability.
