// Debug Ques1 : Sum Of Array

// #include<iostream>
// using namespace std;

// int main(){
//     int n, sum;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[0];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

// Debug Solution1 : 

// #include<iostream>
// using namespace std;

// int main(){
//     int n, sum = 0;                 // sum :- sum=0
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];            // input[0] :- input[i]
//     }
//     for(int i=0; i<n; i++){
//         sum = sum + input[i];
//     }
//     cout << sum << endl;
//     return 0;
// }


// Debug Ques2 : Linear Search

// void linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return;
//         }
//     }
//     return;
// }

// Debug Solution2 :

// int linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return i;
//         }
//     }
//     return -1;
// }


// Debug Ques3 : Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.

// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }

// Debug Solution3 :

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
}

