#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Suppose we have a vector named nums of size 4. Then, begin() and end() are member functions that return iterators pointing to the beginning and end of the vector respectively.
    // nums.begin() points to the first element in the vector i.e 0th index.
    // nums.begin() + i points to the element at the ith index.
    // nums.end() points to on element past the final element in the vector.

    vector<int> nums;

    // CREATING AND TRAVERSING : ITERATOR

    vector<string> languages = {"Python","C++","Java"};   

    vector<string> :: iterator it = languages.begin();     // creating
    while(it != languages.end()){                          // traversing
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    //or

    vector<string> :: iterator it2;                                   // creating
    for(it2 = languages.begin(); it2 != languages.end();it2++){       // traversing
        cout << *it2 << " ";
    }
    cout << endl;

    cout << endl;

    



    return 0;
}