#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int size = nums.size();

    // finding pairs 
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){    // i+1 because we dont want duplicate elements like 1,1
            if((nums[i]+nums[j]) == target){
                return {i,j};
            }
        }
    }

    // otherwise return empty array
    return {};

    // METHOD 2 : two pointer approach 
        // can be done only when you have to tell that exists or not (bool) because Sorting destroys original indices
        // int l = 0;
        // int r= size-1;
        // sort(nums.begin(),nums.end());

        // while(l<r){
        //     int sum = nums[l]+nums[r];
        //     if(sum == target){
        //         return {l,r};
        //     }
        //     else if(sum < target){
        //         l++;
        //     }
        //     else{
        //         r--;
        //     }
        // }

        // return {};

}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans = twoSum(arr,5);
    
    cout << ans[0] <<"," << ans[1] << endl;

    return 0;
}