#include<iostream>
using namespace std;

void replacewithX(char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] == ' '){
            arr[i] = 'X';
        }
    }
    cout << arr;
}
int main(){
    char arr[50];
    cin.getline(arr,50);

    replacewithX(arr,50);
    cout << endl;
    return 0;
}