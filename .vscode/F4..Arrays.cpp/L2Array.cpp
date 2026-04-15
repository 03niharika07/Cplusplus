#include<iostream>
#include<vector>
using namespace std;

int main(){
    // fill function

    vector<int> vec = {1,3,4,6,7};
    int size = vec.size();
    for(int i=0; i<size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    fill(vec.begin(), vec.end(), 5);   // complete array filled with element 5

    for(int i=0; i<size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    fill(vec.begin(), vec.begin()+1, 1);    // first box filled with 1

    for(int i=0; i<size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}