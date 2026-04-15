#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);

    vector<int> b;
    b.push_back(20);
    b.push_back(40);
    b.push_back(60);
    b.push_back(80);


    // 1. set_union() : Computes the union of two sorted ranges.
    
    vector<int> result;
    set_union(a.begin(),a.end(),b.begin(),b.end(),inserter(result, result.begin()));
    // inserter is a helper function (iterator) used to insert elements into a container (like vector, list, set) at a specific position.

    for(int i : result){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 2. set_intersection() : Computes the intersection of two sorted ranges.

    vector<int> result2;
    set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(result2, result2.begin()));

    for(int i : result2){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 3. set_difference() : Computes the difference between two sorted ranges.
    // (like agr ek vector h 10,20,30,40 aur dusra vector h 20,40,60,80, toh jo similar elements honge voh remove hojaenge aur baaaki bache hue ans m aajaenge)
    // (i.e yha pr similar hai 20 aur 40, ye remove honge ajur ans m aaega 10,30,60,80)
    vector<int> result3;
    set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(result3, result3.begin()));

    for(int i : result3){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 4. set_symmetric_difference() : Computes the symmetric difference of two sorted ranges.

    vector<int> result4;
    set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(result4, result4.begin()));

    for(int i : result4){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    return 0;
}