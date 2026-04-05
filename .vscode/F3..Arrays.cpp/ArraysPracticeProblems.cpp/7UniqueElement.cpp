#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> nums){
    int unique = 0;
    int size = nums.size();

    for(int i=0; i<size; i++){
        unique = unique ^ nums[i];
    }

    return unique;
}

int main(){
    vector<int> nums = {1,2,2,3,3};
    int ans = findUniqueElement(nums);
    cout << ans << endl;

    return 0;
}
