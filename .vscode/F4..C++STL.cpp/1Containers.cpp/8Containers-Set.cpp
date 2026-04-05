#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    // creation of a set

    set<int> s;
    unordered_set<int> us;

    // Member Funtions :

    // 1. insert(const T& value) : Inserts a new element into the set, maintaining the order and uniqueness of elements.
    // 2. size() : Returns the no. of elements currently in the set.
    
    s.insert(2);
    s.insert(15);
    s.insert(4);

    us.insert(19);
    us.insert(27);
    us.insert(3);

    cout <<"Size of Ordered Set: " << s.size() << endl;
    cout << "Size of Unordered Set: " << us.size() << endl;

    // 3. begin() : Returns an iterator pointing to the first element in the set.
    // 4. end() : Returns an iterator pointing to the past-the-end element in the set.

    // traverse - giving ordered set
    set<int> :: iterator it = s.begin();
    cout << "Ordered Set : ";
    while(it != s.end()){
        cout << *it << " ";
        it++;
    }
    cout<< endl;

    unordered_set<int> :: iterator it2 = us.begin();
    cout << "Unordered Set : ";
    while(it2 != us.end()){
        cout << *it2 << " ";
        it2 ++;
    }
    cout << endl;

    cout << endl;

    // 5. empty() : Chceks whether the set is empty (whether its size is 0).
    // 6. clear() : Removes all the elements from the set, whaich are destroyed, and leaves it with a size of 0.

    if(s.empty() == true){
        cout << "The set is empty" << endl;
    }
    else{
        cout << "The set is not empty" << endl;
    }
    cout << endl;

    cout << "Original Size of UnOrdered Set: " << us.size() << endl;
    
    us.clear();
    cout << "Size of Set after clear(): " << us.size() << endl;

    cout << endl;

    // 7. erase(const T& key) or erase(iterator position) or erase(iterator first,iterator last) : Removes one or more elements from the set specified by key or position.

    cout << "Original size of Ordered Set: " << s.size() << endl;

    s.erase(s.begin(),s.end());
    cout <<"Size of Set after erase() : " << s.size() << endl;

    cout << endl;

    // 8. find(const T& key) : Returns an iterator to the element with the given key, or end() if the key is not found.

    if(s.find(15) != s.end()){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    cout << endl;

    // 9. count(const T& key) : Returns the number of elements with the specified key(1 or 0, since std::set does not allow duplicate keys).

    if(s.count(2) == 0){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found" << endl;
    }

    cout << endl;
    


    return 0;
}