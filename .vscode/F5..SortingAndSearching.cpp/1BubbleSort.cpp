#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &v){
    int n = v.size();

    for(int i=0; i<n-1; i++){                 // i belongs to [0,4) , 4 not included bcoz last element toh hme sorted milega
        for(int j=0;j<n-i-1;j++){
            if( v[j] > v[j+1]){               // if (v[j] < v[j+1]) : for decreasing order
                swap(v[j],v[j+1]); 
            }
        }
    }
}


int main(){
    vector<int> v = {5,3,4,1,2};
    bubbleSort(v);
    print(v);
    return 0;
}