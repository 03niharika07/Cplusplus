#include<iostream>
#include<cstring>
using namespace std;

void reverse(char arr[], int size){
    int s = 0;
    int e = strlen(arr) - 1;

    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    cout << arr << endl;
}

int main(){
    char ch[50];
    cin.getline(ch,50);
    reverse(ch,50);
    cout << endl;

    return 0;
}