#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
}

bool myComp(int &a, int &b){             // returns boolean value
    return a>b;                          // sort in decreaing order  / a<b (sort in increasing order)
}

void printvv(vector<vector<int>> &p){
    for(int i=0; i<p.size(); i++){
        vector<int> &temp = p[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
}

bool myCompforIstIndex(vector<int> &a, vector<int> &b){
    return a[1] < b[1];     // increasing order
}

int main(){
    vector<int> v = {5,4,3,9,0};

    // Ascending Order Sorting
    sort(v.begin(),v.end());     
    print(v);

    // Descending Order Sorting - using a comparator (myComp) : apne according choose krte
    sort(v.begin(),v.end(),myComp);
    print(v);

    // Vector of Vector Sorting
    vector<vector<int>> p;

    int n;
    cout << "Enter size:\n";
    cin >> n;

    for(int i=0; i<n; i++){
        int a,b;
        cout << "Enter a,b: " << endl;
        cin >> a >> b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        p.push_back(temp);
    }

    cout << "Here are the values : " << endl;
    printvv(p);

    cout << "Sorted by first index : " << endl;
    sort(p.begin(),p.end(), myCompforIstIndex);
    printvv(p);

    return 0;
}