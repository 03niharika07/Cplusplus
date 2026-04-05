#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateAnArray(vector<int>& nums, int k){
    int size = nums.size();

    k= k%size; // agr k ki value 15 aagyi toh voh usse minimise krdega

    // last ki value store kradi temp array mai
    vector<int> temp;
    for(int i=size-k; i<size; i++){
        int value = nums[i];
        temp.push_back(value);
    }

    // shift krado
    for(int i=size-1; i>=0; i--){
        nums[i] = nums[i-k];
    }

    // copy values from temp array
    for(int i=0; i<k; i++){
        nums[i] = temp[i];
    }

    for(int i: nums){
        cout << i << " ";
    }


    // Another method using O(1) complexity
    // int size = nums.size();
    //     k=k % size;
    //     //Step-1: reverse whole array
    //     reverse(nums.begin(),nums.end());

    //     //Step-2: reverse first k elements
    //     reverse(nums.begin(), nums.begin()+k);

    //     //Step-3: reverse last k elements
    //     reverse(nums.begin()+k, nums.end());
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    rotateAnArray(nums,3);

    return 0;
}