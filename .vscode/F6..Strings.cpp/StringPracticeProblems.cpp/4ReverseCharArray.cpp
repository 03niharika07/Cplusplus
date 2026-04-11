#include<iostream>
#include<vector>
using namespace std;

void reverseCharArray(vector<char>& arr) {
    int s = 0;
    int e = arr.size()-1;

    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(char i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<char> ch = {'n','e','h','a'};

    reverseCharArray(ch);


    return 0;
}