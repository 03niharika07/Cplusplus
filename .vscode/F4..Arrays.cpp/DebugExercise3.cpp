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

// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j-1] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }


// Debug Ques4 : 

// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+2){
//         int temp = arr[i];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }

// Debug Solution4 :

// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+1){
//         int temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
// }

// Debug Ques5 : List all pairs in array that sums to X.

// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }

// Debug Solution5 :

// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i+1; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }


// Debug Ques6 : List all triplets in array that sums to X.

// int tripletSumToX(int input[], int size, int x){
// 	int triplets = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			for(int k=j; k<size; k++){
// 				if(input[i] + input[j] + input[k] == x) triplets++;
// 			}
// 		}
// 	}
// 	return triplets;
// }

// Debug Solution6 :

// int tripletSumToX(int input[], int size, int x){
// 	int triplets = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i+1; j<size; j++){
// 			for(int k=j+1; k<size; k++){
// 				if(input[i] + input[j] + input[k] == x) triplets++;
// 			}
// 		}
// 	}
// 	return triplets;
// }


// Debug Ques7 : Sort 0s and 1s

// void sort0sand1s(int input[], int size){
// 	int nextZero = 0;
// 	for(int i=0; i<size; i++){
// 		if(input[nextZero] == 0){
// 			int temp = input[nextZero];
// 			input[nextZero] = input[i];
// 			input[i] = temp;
// 		}
// 	}
// }

// Debug Solution7 :

// void sort0sand1s(int input[], int size){
// 	int nextZero = 0;
// 	for(int i=0; i<size; i++){
// 		if(input[i] == 0){
// 			int temp = input[nextZero];
// 			input[nextZero] = input[i];
// 			input[i] = temp;
//             nextZero++;
// 		}
// 	}
// }