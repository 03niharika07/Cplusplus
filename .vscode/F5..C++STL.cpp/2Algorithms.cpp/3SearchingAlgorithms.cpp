#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    // 1. binary search : Checks if a value exists in a sorted range.
    // (binary search is applicable to monotonis functions - always increasing or always decreasing).
    // (complexity of binary search : O(log n))

    int target = 40;
    int target2 = 400;

    bool ans = binary_search(marks.begin(),marks.end(),target);      // returns 1 -> true (means found)
    bool ans2 = binary_search(marks.begin(),marks.end(),target2);    // returns 0 -> false (means not found)

    cout << ans << endl;
    cout << ans2 << endl;

    cout << endl;

    // 2. lower_bound : Finds the first element greater or equal to a value in a sorted range.

    auto it = lower_bound(marks.begin(),marks.end(),35);
    cout << *it << endl;

    cout << endl;

    // 3. upper_bound : Finds the first element greater than a value in a sorted range.

    auto it1 = upper_bound(marks.begin(),marks.end(),40);
    cout << *it1 << endl;

    cout << endl;

    // 4. equal_range : Finds a range of elements equal to a value in a sorted range.

    auto it3 = equal_range(marks.begin(),marks.end(),30);    // pair of iterator return krta hai

    cout << "First index : " << (it3.first - marks.begin()) << endl;
    cout << "Last index : " << (it3.second - marks.begin()) << endl;

    cout << endl;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    pair <vector<int>::iterator, vector<int>:: iterator> range;
    range = equal_range(v.begin(),v.end(),30);

    cout << "First index : " << (range.first - v.begin()) << endl;
    cout << "Last index : " << (range.second - v.begin()) << endl;

    cout << endl;

    return 0;
}