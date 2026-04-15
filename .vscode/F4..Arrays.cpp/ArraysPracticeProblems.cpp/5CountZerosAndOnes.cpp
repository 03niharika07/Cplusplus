#include<iostream>
#include<vector>
using namespace std;

pair<int, int> countZerosAndOnes(const vector<int>& nums){
    int countZeros = 0;
    int countOnes = 0;
    int size = nums.size();

    for(int i=0; i<size; i++){
        if((nums[i]) == 0){
            countZeros ++;
        }
        if((nums[i]) == 1){
            countOnes ++;
        }
    }

    return {countZeros, countOnes};
    // or
    // pair<int, int> ans;
    //    ans.first = countZeros;
    //    ans.second = countOnes;
    //    return ans; 
}

int main(){
    vector<int> nums = {1,1,0,1};

    pair<int, int> ans = countZerosAndOnes(nums);
    cout << "zeros: " << ans.first << ", ones: " << ans.second << endl;

    return 0;
}