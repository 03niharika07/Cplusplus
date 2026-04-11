#include<iostream>
using namespace std;

int main(){
    
    // create a char array
    char arr[10];
    arr[9] = '\0'; // last m nulll character add krke chlo

    // character array m without loop input le skte hai, int array m aisa nhi hota tha
    cin >> arr;   //Example : Niharika
    cout << "You have given this input : " << arr << endl;
    cout << endl;

    char brr[4];
    cin >> brr;  // agr mera input a b c d e hoga toh output sirf a aaega bcoz space ko voh as null character lega 
    cout << brr << endl; // usally agr maine input dia NIharika toh Nih_ print hona chahie but vs code m pura print hora
    cout << endl;

    char crr[5];
    char drr[6] = "Neha";

    for(int i=0; i<5; i++){
        cin >> crr[i];
    }
    for(int i=0; i<5; i++){
        cout << crr[i] << " ";
    }
    cout << endl;
    cout << endl;

    cin >> crr;
    cout << crr << endl;
    cout << endl;

    cout << drr << endl;
    
    
    


}