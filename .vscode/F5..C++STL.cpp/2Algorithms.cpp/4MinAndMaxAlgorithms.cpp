#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    // 1. min() : Returns the smaller of two values.

    int a = 200;
    int b = 300;

    cout << "Min number : " << min(a,b) << endl;

    cout << endl;

    // 2. max() : Returns the larger of two values.

    int c = 900;
    int d = 1900;

    cout << "Max number : " << max(c,d) << endl;

    cout << endl;

    // 3. min_element() : Finds the smallest element in a range.

    vector<int> v;
    v.push_back(10);
    v.push_back(200);
    v.push_back(4);
    v.push_back(56);
    v.push_back(77);

    auto it = min_element(v.begin(),v.end());
    cout << "Min element : " << *it << endl;

    cout << endl;

    // 4. max_element() : Finds the largest element in a range.

    auto it2 = max_element(v.begin(),v.end());
    cout << "Max element : " << *it2 << endl;

    cout << endl;

    return 0;
}