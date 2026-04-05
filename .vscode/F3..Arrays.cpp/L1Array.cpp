#include<iostream>
using namespace std;

// int main() {
//     // array declaration
//     int arr1[5] ;  // stores garbage value
//     cout << arr1[0] << endl;
    
//     // array initialization
//     int arr2[5] = {2,7}; // at index 2,3,4 stores value 0
//     cout << arr2[4] << endl;

//     int arr3[5] = {0}; // all values will be 0
//     int arr4[5] = {1}; // first value will be 1 , othera are 0

//     int arr[] = {10,20,30}; // can work without defining size, can store this data

//     cout << arr2[1] + arr3[0] << endl;

//     return 0;
// }



// // function for printing elements of array

// void printArray (int arr[], int size){
//     for ( int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     printArray(arr,5);
//     cout << endl;
//     printArray(arr,6);
//     cout << endl;
//     printArray(arr,10); // other 5 values are garbage values
//     cout << endl;
    
// }



// printing array

// int main(){
//     int arr[6] = {2,4,5,7,8,3};
//     int size = 6;

//     for (int i=0; i<size; i++){
//         cout << arr[i] << " ";    // or cout << i[arr] << " ";
//     }
//     return 0;
// }



// taking input in an array
// (bad practice,ye nhi krna)

// int main() {
//     int size;
//     cout << "Enter size of array:";
//     cin >> size;

//     int arr[size];
    
//     for (int i=0; i<size; i++){
//         cin >> arr[i];
//     }
//     cout << "Array: ";
//     for (int i =0; i< size; i++){
//         cout << arr[i] << " ";
//     }
// }


// int main(){
//     int arr[10];
//     int n;
//     cout << "Enter the value of n (n is the no. of inputs taken): ";
//     cin >> n;

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     for (int i=0; i<10; i++){
//         cout << arr[i] << " ";
//     }
// }



// create a character array and take 10 inputs 

// int main() {
//     char arr[10];

//     // for taking input
//     for(int i=0; i<10; i++){
//         cin >> arr[i];
//     }
//     // for accessing 
//     for (int i=0; i<10; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



// base address
// int main() {
//     int arr[10];
//     cout << arr; // gives base address
// }



// function to print twice of original value 

// void printTwiceArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout << (2*arr[i]) << " ";
//     }
// }

// int main(){
//     int arr[10] = {1,2,3,4,5};
//     int size = 5;
//     int capacity = 10;
//     printTwiceArray(arr,5);
//     return 0;
// }



// function to print even odd elements 

// void checkEvenOddElements(int arr[], int size){
//     for(int i=0; i<size; i++){
//         int number = arr[i];
//         if ((number % 2) == 0){
//             cout << "Even" << " ";
//         }
//         else{
//             cout << "Odd" << " ";
//         }
//     }
// }

// or

// void checkEvenOddElements(int arr[], int size){
//     for(int i=0; i<size; i++){
//         int number = arr[i];
//         if ((number & 1) == 0){
//             cout << "Even" << " ";
//         }
//         else{
//             cout << "Odd" << " ";
//         }
//     }
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     checkEvenOddElements(arr,5);
//     return 0;
// }



// function to count number of zeros and ones

// void countZeroOne(int arr[], int size){
//     int countZero = 0;
//     int countOne = 0;
//     for(int i=0; i<size; i++){
//         if ((arr[i]) == 0){
//             countZero ++;
//         }
//         else if ((arr[i]) == 1){
//             countOne ++;
//         }
//     }
//     cout << "Total Number of One: " << countOne << endl;
//     cout << "Total Number of Zero: " << countZero << endl;
// }

// int main(){
//     int arr[5]= {1,0,1,0,1};
//     countZeroOne(arr,5);
//     return 0;
// }



// using linear search finding an element (target = 40) from an array

void linearSearch(int arr[], int size){
    int target = 5;
    for(int i=0; i<size; i++){
        if((arr[i])==target){
            cout << "Element found at index: " << i << endl;
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    linearSearch(arr,5);
    return 0;
}