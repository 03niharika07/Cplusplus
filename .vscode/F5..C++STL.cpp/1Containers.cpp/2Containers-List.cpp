#include<iostream>
#include<list>
using namespace std;


int main(){

    // creation of a list

    list<int> l;

    // Member functions :

    // 1. push_back(const T& value) : Adds an element to the end of the list.
    // 2. pop_back() : Removes the last element from the list.
    // 3. push_front(const T& value) : Adds an element to the beginning of the list.
    // 4. pop_front() : Removes the first element from the list.
    // 5. size() : Returns the number of elements in the list.

    list<int> myList;
    myList.push_back(10);
    // 10 
    myList.push_back(20);
    // 10 -> 20
    myList.push_back(30);
    // 10 -> 20 -> 30
    myList.push_front(100);
    // 100 -> 10 -> 20 -> 30

    cout << "Size of List:" << myList.size() << endl;

    // accessing elements
    list<int>:: iterator it = myList.begin();
    while(it != myList.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    myList.pop_back();
    // 100 -> 10 -> 20
    myList.pop_front();
    // 10 -> 20

    cout << "Size of List:" << myList.size() << endl;

    // accessing elements
    list<int> :: iterator it2 = myList.begin();
    while(it2 != myList.end()){
        cout << *it2 << " ";
        it2 ++;
    }
    cout << endl;

    cout << endl;

    // 6. clear() : Removes all the elements from the list, which are destroyed and leaves it with a size of 0.

    cout << "Size of List: " << myList.size() << endl;
    myList.clear();
    cout << "Size after clear() function: " << myList.size();

    cout << endl;
    cout << endl;

    // 7. empty() : Checks if the list is empty (i.e whether its size is 0).

    if(myList.empty() == true){
        cout << "List is empty" << endl;
    }
    else{
        cout << "List is not empty" << endl;
    }

    cout << endl;

    // 8. front() : Accesses the first element in the list.
    // 9. back() : Accesses the last element in the list.

    list<int> integer;
    integer.push_back(100);
    integer.push_back(200);
    integer.push_back(300);

    cout << "First Element: " << integer.front() << endl;
    cout << "Last Element: " << integer.back() << endl;

    cout << endl;

    // 10. begin() : Returns an iterator pointing to the first element in the list.
    // 11. end() : Returns an iterator pointing to the past-the-end element in the list.

    list<int> number = {1,2,3,4};

    list<int> :: iterator it3 = number.begin();
    while(it3 != number.end()){
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    cout << endl;

    // 12. remove(const T& value) : Removes all elements from the list that are equal to the specified value.

    list<int> num = {1,2,3,4,1};

    list<int> :: iterator it4=num.begin();
    while(it4 != num.end()){
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;

    num.remove(1);

    list<int> :: iterator it5=num.begin();
    while(it5 != num.end()){
        cout << *it5 << " ";
        it5++;
    }
    cout << endl;

    cout << endl;

    // 13. swap(list& x) : Swaps the contents of the list with those of another list of the smae type, including the sizes.

    list<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    cout << "Size of first list: " << first.size() << endl;

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    cout << "Size of sceond list: " << second.size() << endl;

    first.swap(second);

    cout << "New size of first list: " << first.size() << endl;
    list<int> :: iterator it6=first.begin();
    while(it6 != first.end()){
        cout << *it6 << " ";
        it6 ++;
    }
    cout << endl;

    cout << "New size of second list: " << second.size() << endl;
    list<int> :: iterator it7=second.begin();
    while(it7 != second.end()){
        cout << *it7 << " ";
        it7 ++;
    }
    cout << endl;

    cout << endl;

    // 14. insert(iterator position, const T& value) : Inserts a new element before the specified position in the list.

    list<int> third;
    third.push_back(10);
    third.push_back(20);

    third.insert(third.begin(),30);
    third.insert(third.end(),40);

    list<int> :: iterator it8=third.begin();
    while(it8 != third.end()){
        cout << *it8 << " ";
        it8 ++;
    }
    cout << endl;

    cout << endl;

    // 15. erase(iterator position) or erase(iterator first, iterator last) : Removes one or more element from the list starting at the specified position.

    list<int> four;
    four.push_back(100);
    four.push_back(200);
    four.push_back(300);

    four.erase(four.begin());
    cout << "Size: " << four.size() << endl;

    four.erase(four.begin(),four.end());
    cout << "New Size: " << four.size() << endl;

    cout << endl;

    return 0;
}