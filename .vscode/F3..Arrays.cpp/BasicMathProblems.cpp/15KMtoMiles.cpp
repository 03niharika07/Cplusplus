#include<iostream>
using namespace std;

double kmToMiles(int Km){
    double miles = Km * 0.621371;
    return miles;
}

int main(){
    double ans = kmToMiles(5);
    cout << ans << endl;
    
    return 0;
}