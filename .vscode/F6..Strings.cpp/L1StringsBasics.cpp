#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    // CREATION OF A STRING/ DECLARATION
    string str;

    // INITIALIZATION OF STRING
    string name = "Niharika";
    string fullName = "Niharika Bansal";

    // PRINT STRING
    cout << name << endl;
    cout << fullName << endl;
    cout << endl;

    // // INPUT 
    // cin >> str; // space k baad wla read nhi krega
    // cout << "Output: " << str << endl;

    getline(cin,str);
    cout << "Output : " << str << endl;

    // LENGTH OF STRING
    cout << "Length :" << str.length() << endl;

    // push_back FUNCTION : Adds to the end 
    str.push_back('X');
    cout << "New Output : " << str << endl;
    cout << "New Length : " << str.length() << endl;

    // pop_back FUNCTION : Removes from the end
    str.pop_back();
    cout << "New Output : " << str << endl;
    cout << "New Length : " << str.length() << endl;

    // INDEXES, ACCESSING
    cout << str[0] << endl;
    cout << endl;

    // CONCATENATION
    string firstName = "Neha";
    string lastName = "Bansal";
    string fullName2 = firstName + " " + lastName;

    cout << fullName2 << endl;
    cout << "Length : " << fullName2.length() << endl;

    // clear() FUNCTION
    fullName2.clear();
    cout << "New Length : " << fullName2.length() << endl;
    cout << fullName2 << endl;
    cout << "Hi !" << endl;
    cout << endl;

    // empty() FUNCTION
    if(str.empty()){      // true condition
        cout << "String is Empty" << endl;;
    }
    else{
        cout << "String is not empty" << endl;;
    }
    cout << endl;

    // reverse() FUNCTION
    string a = "Niharika";
    reverse(a.begin(),a.end());
    cout << a << endl;
    cout << endl;

    // begin() and end() FUNCTIONS
    string b = "Neha";
    cout << *(b.begin()) << endl;
    cout << *(b.end()-1) << endl;
    cout << endl;

    // front() and back() FUNCTIONS
    cout << b.front() << endl;
    cout << b.back() << endl;
    cout << endl;

    // substr(index, size) FUNCTION - imp
    // substring provide krta hai
    string n = "abcdefghij";
    cout << n.substr(2) << endl;     // 2th index se last index tak saare element print
    cout << n.substr(5,3) << endl;   // 5th index se aage k sirf 3 element print honge
    cout << n.substr(0) << endl;     // saare print hojaenge
    cout << endl;

    // find() FUNCTION
    // Case1. search string
    string z = "Niharikabansal";
    int ans = z.find("bansal");  // returns index jaha se satrt hora h
    cout << ans << endl;

    // Case2. search string, starting index
    int ans2 = z.find("bansal",2);
    cout << ans2 << endl;
    int ans3 = z.find("bansal",10);   // returns -1
    cout << ans3 << endl;

    // Case3. char search -> valid ans milgya
    int ans4 = z.find('N');
    cout << ans4 << endl;

    // Case4. char search -> valid ans nhi mila (npos), -1 return hoga
    int ans5 = z.find('z');       // returns -1
    cout << ans5 << endl;

    if(z.find('z') == string::npos){
        cout << "z is not present in the string" << endl;
    }
    else{
        cout << "z is present" << endl;
    }
    cout << endl;

    // compare() FUNCTION : agr string equal hogi toh 0 return krega vrna non zero return krega
    string first = "Neha";
    string second = "Neha";

    int result = first.compare(second);
    cout << result << endl;  // returns 0 - exactly equal

    string p = "neha";
    string q = "NEHA";

    int result2 = p.compare(q);  // case sensitive
    cout << result2 << endl;  // returns non zero

    string g = "Neha";
    string h = "Bansal";

    int result3 = g.compare(h);
    cout << result3 << endl;  // returns non zero
    
    return 0;
}