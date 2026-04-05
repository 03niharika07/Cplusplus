#include<iostream>
#include<vector>
using namespace std;

int searchElementInArray(vector<int>& nums, int target){
    int size = nums.size();
    for(int i=0; i<size; i++){
        int value = nums[i];
        if(value == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);

    int ans = searchElementInArray(nums, 5);
    cout << ans << endl;
    return 0;
}
