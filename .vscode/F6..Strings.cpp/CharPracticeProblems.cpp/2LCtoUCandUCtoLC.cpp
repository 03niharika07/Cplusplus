#include<iostream>
using namespace std;

void convertLCtoUC(char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
    cout << arr;
}

void convertUPtoLC(char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
    cout << arr;
}


int main(){
    char arr[50];
    cin.getline(arr,50);
    convertLCtoUC(arr,50);
    cout << endl;

    char brr[50];
    cin.getline(brr,50);
    convertUPtoLC(brr,50);
    cout << endl;


    return 0;
}