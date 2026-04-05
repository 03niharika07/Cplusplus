#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creation of a stack

    stack<int> s;

    // Member Functions

    // 1. push(const T& value) : Adds an element to the top of the stack.
    // 2. pop() : removes the top element of the stack.
    // 3. size() : Returns the number of elements in the stack.

    stack<int> st;

    st.push(10);
    // 10
    st.push(20);
    // 10,20
    st.push(30);
    // 10,20,30

    cout << "Size of stack: " << st.size() << endl;

    st.pop();
    // 10,20
    st.pop();
    // 10

    cout << "New size of stack: " << st.size() << endl;

    cout << endl;

    // 4. top() : Accesses the top element of the stack, which is the most recently added element

    stack<int> num;

    num.push(67);
    num.push(56);
    num.push(87);

    cout << "Top element: " << num.top() << endl;

    cout << endl;

    // 5. empty() : Checks if the stack is empty (whether its size is 0).

    if(num.empty() == true){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    cout << endl;

    // 6. swap(stack& x) : Swaps the contents of the stack with those of another stack of the same type.

    stack<int> first;

    first.push(1);
    first.push(2);
    first.push(3);

    stack<int> second;

    second.push(10);
    second.push(20);
    second.push(30);

    first.swap(second);

    cout << first.top() << endl;

    cout << endl;

    return 0;
}