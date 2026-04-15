#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char arr[], int size){
    int s = 0;
    int e = strlen(arr) - 1;

    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char arr[50];
    cin.getline(arr,50);

    bool ans = checkPalindrome(arr,50);
    cout << ans << endl;
    return 0;
}