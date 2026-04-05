#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation of priority queue

    priority_queue<int> pq;   // max heap -> max value -> highest priority

    // Member function :

    // 1. push(const T& value) : Adds an element to the priority queue and reorders it to maintain the heap property.
    // 2. top() : Accesses the element at the top of the priority queue, which is the largest(or highest priority) element, depending upon the comparator used.
    // 3. size() : Returns the no. of elements currently in the priority queue.
    // 4. pop() : Removes the top element from the priority queue, which is the largest element, and reorders the remaining elements to maintain the heap properly. 

    priority_queue<int> q;

    q.push(10);
    // 10
    q.push(20);
    // 20,10
    q.push(55);
    // 55,20,10
    q.push(40); 
    // 55,40,20,10
    
    cout << "Size: " << q.size() << endl;
    cout << "Highest priority element: " << q.top() << endl;  // returns 55 (highest priority element)

    q.pop();  // removes the highest priority element

    cout << "New size: " << q.size() << endl;
    cout << "Highest priority element: " << q.top() << endl;  // returns 40 (highest priority element)

    cout << endl;

    // 5. empty() : Checks if the priority queue is empty.

    if(q.empty() == true){
        cout << "Priority Queue is empty" << endl;
    }
    else{
        cout << "Priority Queue is not empty" << endl;
    }

    cout << endl;

    // 6. swap(priority_queue& x) : Swaps the contents of the priority queue with those of another priority queue of the same type, including their underlying containers and comparators.
    
    priority_queue<int> first;

    first.push(10);
    // 10
    first.push(30);
    // 30,10
    first.push(15);
    // 30,15,10

    priority_queue<int> second;

    second.push(100);
    // 100
    second.push(200);
    // 200,100
    second.push(300);
    // 300,200,100

    first.swap(second);

    cout << first.top() << endl;

    cout << endl;

    // MIN HEAP (min value -> highest priority)

    priority_queue<int, vector<int>, greater<int>> prq;

    prq.push(10);
    // 10
    prq.push(20);
    // 10,20
    prq.push(30);
    // 10,20,30

    cout << prq.top() << endl;  // returns 10 (highest priority element)

    prq.pop();  // removes the highest priority element

    cout << prq.top() << endl;

    return 0;
}