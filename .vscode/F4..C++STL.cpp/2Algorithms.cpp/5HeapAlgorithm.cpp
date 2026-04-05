#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(23);
    v.push_back(25);
    v.push_back(8);
    v.push_back(1);
    v.push_back(100);
    v.push_back(7);

    vector<int> p;

    p.push_back(22);
    p.push_back(11);
    p.push_back(55);
    p.push_back(66);
    p.push_back(77);

    // 1. make_heap() : Converts a range into a max-heap.
    // Complexity : O(n)

    make_heap(v.begin(),v.end());

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    make_heap(p.begin(),p.end());

    for(int i : p){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 2. push_heap() : Inserts an element into a max-heap.
    // Complexity : O(log n)

    p.push_back(99);
    push_heap(p.begin(),p.end());

    for(int i : p){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 3. pop_heap() : Removes the largest element from a max-heap.
    // Complexity : O(1)

    pop_heap(p.begin(),p.end());
    p.pop_back();   // otherwise largest element i.e 99 voh last m aajaega 

    for(int i : p){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 4. sort_heap() : Sorts a range that represents a max-heap.
    // Complexity : O(n)
    // sorts in ascending order

    sort_heap(p.begin(),p.end());

    for(int i : p){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    sort_heap(v.begin(),v.end());

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    return 0;
}