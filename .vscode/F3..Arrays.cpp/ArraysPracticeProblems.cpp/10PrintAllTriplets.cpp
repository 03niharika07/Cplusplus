#include<iostream>
#include<vector>
using namespace std;

void printUniqueTriplets(vector<int>& arr){
    //1 element ek hi baar use hona chahiye
    int size = arr.size();

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << " ";
            }
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4};
    printUniqueTriplets(arr);

    return 0;
}