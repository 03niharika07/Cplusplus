#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation of a queue

    queue<int> q;

    // Member Functions

    // 1. push(constT& value) : Adds an element to the end of the queue.
    // 2. pop() : Removes the first element from the queue.
    // 3. size() : Returns the number of elements in the queue.

    queue<int> myqueue;
    
    myqueue.push(10);
    // 10
    myqueue.push(20);
    // 10 , 20
    myqueue.push(30);
    // 10 , 20 , 30
    myqueue.push(40);
    // 10 , 20 , 30 , 40

    cout << "Size of queue: " << myqueue.size() << endl;

    myqueue.pop();
    // 20 , 30 , 40

    cout << "New size of Queue: " << myqueue.size() << endl;

    cout << endl;

    // 4. empty() : Checks if the queue is empty (i.e whether its size is 0).

    if(myqueue.empty() == true){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    
    cout << endl;

    // 5. front() : Accesses the first element in the queue, which is the next element to be removed.
    // 6. back() : Accesses the last element in the queue,which is most recently added element.

    queue<int> a;
    a.push(10);
    a.push(20);
    a.push(30);

    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;

    cout << endl;

    // 7. swap(queue& x) : Swaps the contents of the queue with those of another queue of the same type.

    queue<int> y;
    y.push(1);
    y.push(2);
    y.push(3);

    queue<int> z;
    z.push(100);
    z.push(200);
    z.push(300);

    y.swap(z);

    cout << y.front() << " " << y.back() << endl;

    return 0;
}