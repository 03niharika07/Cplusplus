#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // ITERATOR OPERATIONS :

    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5,6};

    // 1. *itr : returns the element at the current position.
    // 2. ++itr / itr++ / itr=itr+1 : moves iterator to the next position.
    // 3. --itr / itr-- / itr = itr-1 : moves iterator to the previous position.

    vector<int> :: iterator it = a.begin();
    while(it != a.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    vector<int> :: iterator itr = b.end()-1;
    while(itr >= b.begin() ){
        cout << *itr << " ";
        itr --;
    }
    cout << endl;

    cout << endl;

    // 4. itr+i : moves iterator by i positions.

    cout << *(a.begin()+2) << endl;
    
    cout << endl;

    // 5. itr1 == itr2 : returns true if the positions pointed by the iterators are same.

    vector<int> first = {10,20,30};
    vector<int> second = {30,50,50};

    vector<int> :: iterator itr1 = first.begin();
    vector<int> :: iterator itr2 = first.begin();

    cout << (itr1==itr2) << endl;    // pointing to the same vector, same position , returns true

    cout << endl;

    // 6. itr1 != itr2 : returns true if the positions pointed by the iterators are not the same.

    cout << (itr1 != itr2) << endl;

    cout << endl;

    // 7. itr = itr1 : assigns the position pointed by itr1 to the itr iterator.

    vector<int> v = {100,200,300};

    vector<int> :: iterator iter1 = v.begin();
    vector<int> :: iterator iter = iter1;

    cout << *(iter) << endl;

    // 8. itr ->m / (*itr).m : returns the member value m of the object pointed by the iterator and is equivalent to (*itr.m).

    unordered_map<string,string> map;
    map.insert(make_pair("In","India"));
    map.insert(make_pair("En","England"));

    unordered_map<string,string> :: iterator iterator = map.begin();
    while(iterator != map.end()){
        pair<string,string> q = *iterator;
        cout << q.first << " " << q.second << endl;
        //or
        cout << iterator->first << " " << iterator->second << endl;
        iterator ++;
    }

    cout << endl;
    

    return 0;
}
