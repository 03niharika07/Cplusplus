#include<iostream>
#include<unordered_map>
using namespace std;

// Method 1
bool isAnagram(const string& s, const string& t){
    int arr[1000] = {0};

    if(s.length() != t.length()) return false;

    //for string s let's add up counts
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        arr[ch] ++;  // agar ch = 'a' → arr[97]++
    }
    // for string t , decrease the count
    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        arr[ch] --;  // 'n' aaya → arr[110]--
    }

    // check all occurrence are 0 only
    for(int i=0; i<1000; i++){
        if(arr[i] != 0){
            return false;
        }
    }
    // agr main yaha aagya
    // iska mtlb har jagah 0 mil gya
    return true;
}

// Method 2
bool isAnagramcheck(const string& s, const string& t){
    unordered_map<char, int> count;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // count ek unordered_map hai, jo ek dictionary ki tarah hota hai.
        // Computer dekhta hai ki kya map ke andar ch (jaise ki 'a') naam ki koi Key pehle se maujood hai?

        // Agar wo character map mein pehli baar aaya hai:
        // C++ automatically us character ke liye ek entry banata hai.
        // Uski shuruati value (default value) 0 set kar deta hai.
        // Example: Agar ch = 's', toh map aise dikhega: {'s': 0}.
        // Ab ++ operator apna kaam karta hai aur us value mein 1 jod deta hai.
        // Example: 0 badhkar 1 ho jata hai. Ab map dikhega: {'s': 1}.
        count[ch] ++;
    }

    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        count[ch] --;
    }

    for(char ch = 'a'; ch <= 'z'; ch ++){
        if(count[ch] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "neha";
    string t = "enah";

    bool ans = isAnagram(s,t);
    cout << ans << endl;

    bool ans2 = isAnagramcheck(s,t);
    cout << ans2 << endl;
    return 0;
}