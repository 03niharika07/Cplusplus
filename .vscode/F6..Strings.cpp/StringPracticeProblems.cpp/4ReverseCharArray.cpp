#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1
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

    // reverseCharArray(ch);
    // cout << endl;

    // Approach 2 : using inbuilt function 
    reverse(ch.begin(),ch.end());
    for(char i : ch){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}