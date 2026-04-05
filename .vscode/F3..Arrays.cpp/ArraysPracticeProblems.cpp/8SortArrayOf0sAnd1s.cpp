#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArray(vector<int>& nums){
    vector<int> arr = nums;        // copy bnali

    //METHOD 1: using inbuilt functions 
    // sort(arr.begin(), arr.end());
    // return arr;


    //METHOD 2: by counting total zeros and total ones 
    //Step 1: count total zeros and ones 
    // int size = arr.size();
    // int totalZeros = 0;
    // int totalOnes = 0;

    // for(int i=0; i<size; i++){
    //     if(arr[i] == 0){
    //         totalZeros ++;
    //     }
    //     else if(arr[i] == 1){
    //         totalOnes ++;
    //     }
    // }

    // // Step 2: use fill function
    // fill(arr.begin(), arr.begin()+totalZeros, 0);
    // fill(arr.begin()+totalZeros, arr.end(), 1);

    // //Step 3: return array
    // return arr;

    //METHOD 3: two pointer approach

    int size = arr.size();

    int l = 0;
    int r = size - 1;

    while(l < r){
        if(arr[l] == 0){
            l++;
        }
        else if(arr[r] == 1){
            r--;
        }
        else{
            swap(arr[l], arr[r]);
        }
    }
    return arr;

}

int main(){
    vector<int> arr= {1,0,0,1,1};
    vector<int> ans = sortArray(arr);
    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}