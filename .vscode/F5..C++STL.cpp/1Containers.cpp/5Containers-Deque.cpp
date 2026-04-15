#include<iostream>
#include<deque>
using namespace std;

int main(){

    // creation of a deque

    deque<int> dq;

    // Memeber functions :

    // 1. push_back(const T& value) : Adds an element to the end of deque.
    // 2. pop_back() : Removes the last element from deque.
    // 3. push_front(const T& value) : Adds an element to the beginning of queue.
    // 4. pop_front() : Removes the first element from deque.
    // 5. size() : Returns the number of elements currently in the deque.

    deque<int> num;

    num.push_back(20);
    // 20
    num.push_back(30);
    // 20,30
    num.push_front(10);
    // 10,20,30
    num.push_back(40);
    // 10,20,30,40

    cout << "Size of queue: " << num.size() << endl;

    num.pop_back();
    // 10,20,30
    num.pop_front();
    // 20,30

    cout << "New size of queue: " << num.size() << endl;

    cout << endl;

    // 6. front() : Accesses the first element in the deque.
    // 7. back() : Accesses the last element in the deque.

    cout << "First element: " << num.front() << endl;
    cout << "Last element: " << num.back() << endl;

    cout << endl;

    // 8. empty() : Checks whether the deque is empty 

    if(num.empty() == true){
        cout << "Deque is empty" << endl;
    }
    else{
        cout << "Deque is not empty" << endl;
    }

    cout << endl;

    // 9. begin() : Returns an iterator pointing to the first element in deque.
    // 10. end() : Returns an iterator pointing to the past-the-end element in the deque.

    deque<int> n;

    n.push_back(100);
    n.push_back(200);
    n.push_back(300);
    n.push_back(400);

    deque<int> :: iterator it = n.begin();
    while(it != n.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    cout << endl;

    // 11. operator [] (size_type n) : Accesses the element at the specified index without bounds checking.
    // 12. at(size_type n) : Accesses the element at the specified index with bounds checking

    cout << n[0] << endl;
    cout << n.at(0) << endl;

    cout << endl;

    // 13. clear() : Removes all elements from the queue, which are destroyed and leaves it with a size of 0.

    deque<float> f;

    f.push_back(2.1);
    f.push_back(2.3);

    cout << "Size: " << f.size() << endl;

    f.clear();

    cout << "New size: " << f.size() << endl;

    cout << endl;

    // 14. insert(iterator position, const T& value) : inserts the new element before the specified position in the deque.

    deque<int> y;

    y.push_back(10);
    // 10
    y.push_back(20);
    // 10,20

    y.insert(y.begin(),100);
    // 100,10,20

    deque<int> :: iterator it2 = y.begin();
    while(it2 != y.end()){
        cout << *it2 << " ";
        it2 ++;
    }
    cout << endl;

    cout << endl;

    // 15. erase(iterator position) or erase(iterator first, iterator last) : Removes one or more elements from the vector starting at the specified position.

    deque<int> i;

    i.push_front(30);
    i.push_front(20);
    i.push_front(10);

    cout << "Size: " << i.size() << endl;

    i.erase(i.begin(),i.end());

    cout << "New Size: " << i.size() << endl;

    cout << endl;

    // 16.  swap(deque& x) : Swaps the contents of the deque with those of another deque of the same type, including their sizes.

    deque<int> first;

    first.push_back(10);
    first.push_back(20);

    deque<int> second;

    second.push_back(100);
    second.push_back(200);

    first.swap(second);

    cout << first[0] << endl;

    cout << endl;

    return 0;
}