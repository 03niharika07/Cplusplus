#include<iostream>
#include<vector>
using namespace std;

pair<int, int> sumPositiveNegative(const vector<int>& arr){
    int size = arr.size();

    int posSum = 0;
    int negSum = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > 0){
            posSum += arr[i];
        }
        else if(arr[i] < 0){
            negSum += arr[i];
        }
    }

    // method 1
    // return {posSum, negSum};s

    // method 2
    // pair<int,int> ans;
    // ans = {posSum, negSum};
    // return ans;

    // method 3
    // pair<int,int> ans;
    // ans.first = posSum;
    // ans.second = negSum;
    // return ans;

    // method 4
    pair<int,int> ans;
    ans = make_pair(posSum, negSum);
    return ans;
}

int main(){
    vector<int> arr = {1,-2,3,-4};

    pair<int,int> ans = sumPositiveNegative(arr);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}