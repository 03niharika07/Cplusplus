#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums){
    int n = nums.size();

    int s = 0;
    int e = n-1;

    //single element
    if(s == e){
        return nums[s];
    }

    while(s <= e){
        int mid = s + (e-s)/2;

        int currentValue = nums[mid];

        int leftValue = -1;
        if((mid-1) >= 0){
            leftValue = nums[mid-1];
        }

        int rightValue = -1;
        if((mid+1) < n){
            rightValue = nums[mid+1];
        }

        // check current value is an answer or not
        if((currentValue != leftValue) && (currentValue != rightValue)){
            return currentValue;
        }

        // logic for movement of left or right direction
        else if((currentValue == leftValue) && (currentValue != rightValue)){
            // iska mtlb pair ka starting index left value ka index h
            // left value ka index mid-1
            // agr m ans k left m hu toh starting index even hoga
            // agr ans k right m hu toh starting index odd hoga
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){  
                // odd case -> pair right side hai
                e = mid - 1;
            }
            else{
                // right
                s = mid + 1;
            }
        }

        else if(currentValue != leftValue && currentValue == rightValue){
            // currentvalue right wli value k equal hogyi
            // pair ka starting index currentValue ka index hoga
            // currentValue ka starting index -> mid
            int pairStartingIndex2 = mid;
            if(pairStartingIndex2 & 1){
                // odd 
                // right m hu
                // left jana hai
                e = mid - 1;
            }
            else{
                // right
                s = mid + 1;
            }
        }
    }
}

int main(){
    vector<int> v = {1,1,2,2,3,3,4};

    int ans = singleNonDuplicate(v);
    cout << ans << endl;

    return 0;
}