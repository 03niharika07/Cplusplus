#include<iostream>
#include<vector>
using namespace std;

int maxOne(const vector<vector<int>>& nums){
    int n = nums.size();
    int m = nums[0].size();

    int maxCount = 0;
    int maxIdx = -1;

    for(int i=0; i<n; i++){
        // finding first occurrence of 1 in every row
        auto it = lower_bound(nums[i].begin(),nums[i].end(),1);
        int firstOneIdx = it - nums[i].begin();
        int totalOnes = m - firstOneIdx;

        if(totalOnes > maxCount){
            maxCount = totalOnes;
            maxIdx = i;
        }
    }
    return maxIdx;
}

int main(){
    vector<vector<int>> v = {
        {0,0,1,1},
        {1,1,1,1},
        {0,0,0,1}
    };
    
    int ans = maxOne(v);
    cout << ans << endl;
}