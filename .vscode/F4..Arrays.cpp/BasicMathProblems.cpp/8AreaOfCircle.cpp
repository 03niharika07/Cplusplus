#include<iostream>
using namespace std;

int areaOfCircle(int radius) {
    int area = 3.14 *radius *radius;
    return area;
}

int main(){
    int ans = areaOfCircle(6);
    cout << ans << endl;
    return 0;
}
