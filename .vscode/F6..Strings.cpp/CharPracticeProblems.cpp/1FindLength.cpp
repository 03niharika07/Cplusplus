#include<iostream>
#include<cstring>
using namespace std;

// Method 1 : using function
int getlength(char arr[], int size){
    int count = 0;
    while(arr[count] != '\0'){
        count ++;
    }
    return count;
}

int main(){
    char arr[50];
    cin.getline(arr,50);

    int ans = getlength(arr,50);
    cout << ans << endl;
    cout << endl;

    // Method 2 : using inbuilt function
    cout << strlen(arr) << endl;
    cout << endl;

    // Method 3 : using loop
    int length = 0;
    int i = 0;

    while(arr[i] != '\0'){
        length ++;
        i++;
    }
    cout << length << endl;

    return 0;
}