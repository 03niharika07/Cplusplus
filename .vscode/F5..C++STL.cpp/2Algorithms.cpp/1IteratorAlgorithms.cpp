#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout << 2*a << " ";
}

void dividebyTen(float a){
    cout << a/10 << " ";
}

bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    // Iterators and Iterating Algorithms

    // 1. for_each : Applies a function to each element in a range.

    vector<int> arr(4);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    for_each(arr.begin(),arr.end(),printDouble);
    cout << endl;
    for_each(arr.begin(),arr.end(),dividebyTen);
    cout << endl;

    cout << endl;

    // 2. find() : Searches for a specific element in a range.

    int target = 3;
    auto it = find(arr.begin(),arr.end(),target); //or vector<int> :: iterator it = find(arr.begin(),arr.end(),target);
    cout << *it << endl;

    cout << endl;

    // 3. find_if() : Searches for the first element that satisfies a given predicate.

    auto it2 = find_if(arr.begin(),arr.end(),checkEven);
    cout << *it2 << endl;

    cout << endl;

    // 4. count() : Counts the occurrences of a value in a range.

    vector<int> brr(4);
    brr[0] = 3;
    brr[1] = 2;
    brr[2] = 2;
    brr[3] = 5;

    int ans = count(brr.begin(),brr.end(),2);
    cout << ans << endl;

    cout << endl;

    // 5. count_if() : Counts the elements that satisfy a given predicate.

    int ans2 = count_if(brr.begin(),brr.end(),checkEven);
    cout << ans2 << endl;

    cout << endl;

    // 6. sort() : Sorts the elements in a range in ascending order.

    vector<int> v(4);
    v[0] = 1;
    v[1] = 4;
    v[2] = 3;
    v[3] = 2;

    sort(v.begin(),v.end());

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 7. reverse() : Reverses the order of elements in a range.

    reverse(v.begin(),v.end());

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 8. rotate() : Rotates elements in a range.

    vector<int> i(6);
    i[0] = 10;
    i[1] = 20;
    i[2] = 30;
    i[3] = 40;
    i[4] = 50;
    i[5] = 60;

    rotate(i.begin(),i.begin()+3,i.end());

    for(int i : i){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 9. unique() : Removes duplicate elements from a sorted range.

    vector<int> s(4);
    s[0] = 1;
    s[1] = 1;
    s[2] = 2;
    s[3] = 3;

    auto it3 = unique(s.begin(),s.end());
    // it iterator k phle saare unique elements hai
    // it k baad saare duplicate elements hai 
    s.erase(it3,s.end());

    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 10. partition() : Divides elements in a range into two groups based on a predicate.

    vector<int> p(6);
    p[0] = 99;
    p[1] = 23;
    p[2] = 60;
    p[3] = 20;
    p[4] = 10;
    p[5] = 89;

    auto it4 = partition(p.begin(),p.end(),checkEven);
    // it k phle even no. honge 
    // iterator it k badd odd no. honge

    for(int i : p){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;
    

    return 0;
}