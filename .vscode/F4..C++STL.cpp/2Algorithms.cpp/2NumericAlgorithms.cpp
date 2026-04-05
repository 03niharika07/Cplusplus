#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    // Numeric Algorithms 

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // 1. accumulate() : Computes the sum of elements in a range.

    int totalSum = accumulate(arr.begin(),arr.end(),0);   // like we initialise sum = 0, thats why 0
    cout << "Sum: " << totalSum << endl;

    int totalSum2 = accumulate(arr.begin(),arr.end(),1000);
    cout << "Sum + 1000 : " << totalSum2 << endl;
     
    cout << endl;

    // 2. inner_product() : Computes the inner product of two ranges.

    vector<int> a = {1,2,3,4};
    vector<int> b = {1,2,3,4};

    // inner product : (1*1) + (2*2) + (3*3) + (4*4)

    int ans = inner_product(a.begin(),a.end(),b.begin(),0);
    cout << "Inner_product: " << ans << endl;

    cout << endl;

    // 3. partial_sum() : Computes the partial sum of a range.

    vector<int> result(a.size());

    partial_sum(a.begin(),a.end(),result.begin());

    for(int i : result){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 4. iota() : Fills a range with incrementing values.

    vector<int> z(5);

    iota(z.begin(),z.end(),9);

    for(int i : z){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    return 0;
}