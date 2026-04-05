#include<iostream>
#include<vector>
using namespace std;

void printAllPairs(vector<int>& nums){
    int size = nums.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << "(" << nums[i] << ","<< nums[j] << ")" << " " ;
        }
    }
}

void printUniquePair(vector<int>& arr){
    int size = arr.size();
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){    //j=i+1 (duplicate element ko remove krne k liye)
            cout << "(" << arr[i] << ","<< arr[j] << ")" << " " ;
        }
    }
}

int main(){
    vector<int> nums = {1,2,3,4};
    printAllPairs(nums);
    cout << endl;
    printUniquePair(nums);

    return 0;
}