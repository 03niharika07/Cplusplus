#include<iostream>
using namespace std;

double convertTemperature(double temp, string conversionType){
    if(conversionType == "CtoF"){
        return temp * (9.0/5.0) + 32;
    }
    else if(conversionType == "FtoC"){
        return (temp - 32) * (5.0/ 9.0);
    }
    return temp;
}

int main(){
    double ans = convertTemperature(100, "CtoF");
    cout << ans << endl;

    return 0;
}