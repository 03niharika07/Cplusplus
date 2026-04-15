#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    int size = nums.size();
    vector<vector<int>> ans;

    // sort the array 
    sort(nums.begin(), nums.end());

    // finding non duplicate triplets
    for(int i=0; i<size; i++){
        if(i>0 && nums[i] == nums[i-1]){
            // iss case m triplet check nhi krenge
            // iss case m aage bdho 
            // current iteration skip kro
            continue;
        }
        for(int j=i+1; j<size; j++){
            if(j>i+1 && nums[j] == nums[j-1]){
            // iss case m triplet check nhi krenge
            // iss case m aage bdho 
            // current iteration skip kro
            continue;
            }
            for(int k=j+1; j<size; j++){
                if(k>j+1 && nums[k] == nums[k-1]){
                // iss case m triplet check nhi krenge
                // iss case m aage bdho 
                // current iteration skip kro
                continue;
                }

                int first = nums[i];
                int second = nums[j];
                int third = nums[k];
                int sum = first + second + third;
                if(sum == 0){
                    // answer store krna hai
                    vector<int> temp;
                    temp.push_back(first);
                    temp.push_back(second);
                    temp.push_back(third);
                    ans.push_back(temp);
                }
            }
        }
    }
    // answer ko return krdo
    return ans;
}

int main(){
    
    return 0;
}