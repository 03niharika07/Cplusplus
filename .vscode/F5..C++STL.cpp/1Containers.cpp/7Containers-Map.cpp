#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // creation of map

    unordered_map<string,string> table;

    // Member functions : 

    // 1. insert(const std::pair<Key,Value>&value) or insert(iterator hint, const std::pair<Key,Value>&value) : Inserts a new key-value pair into the map;with a hint, it can potentially improve insertion efficiency.

    // insertion
    table["in"] = "India";

    table.insert(make_pair("en","England"));

    pair<string,string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    // 2. size() : Returns the number of key-value pairs currently in map.
    // 3. empty() : Chceks if the map is empty (i.e whether its size is 0).

    cout << "Size of the map: " << table.size() << endl;

    if(table.empty() == true){
        cout << "Map is empty" << endl;
    }
    else{
        cout << "Map is not empty" << endl;
    }

    cout << endl;

    // 4. operator[](const Key& key) : Accesses the value associated with the key, inserting a new element if the key does not exist.
    // 5. at(const Key& key) : Accesses the value associated with the key, throwing an exception if the key is not found.

    cout << table["en"] << endl; 
    cout << table.at("en") << endl;

    table["en"] = "England2";
    cout << table.at("en") << endl;

    cout << endl;

    // 6. clear() : Removes all the key-value pairs from the map, which are destroyed and leaves it with a size of 0.

    unordered_map<string,string> ch;

    ch.insert(make_pair("One","A"));
    ch.insert(make_pair("Two","B"));

    ch["Three"] = "C";
    ch["Four"] = "D";

    pair<string,string> pr;
    pr.first = "Five";
    pr.second = "E";
    ch.insert(pr);

    cout << "Size: " << ch.size() << endl;

    ch.clear();

    cout << "New size: " << ch.size() << endl;

    cout << endl;

    // 7. begin() : Returns an iterator pointing to the first element(key-value pair) in the map.
    // 8. end() : Returns an iterator pointing to the past-the-end element in the map.

    unordered_map<string,string> m;

    m.insert(make_pair("Name","Neha"));
    m.insert(make_pair("Age","Twenty"));
    m.insert(make_pair("Grade","A"));

    // traverse in random order
    unordered_map<string,string> :: iterator it = m.begin();
    while(it != m.end()){
        pair<string,string> q = *it;
        cout << q.first << " " << q.second << endl;
        it ++;
    }
    cout << endl;

    // 9. erase(const Key& key) or erase(iterator position) or erase(iterator first, iterator last) : Removes one or more elements from the map specified by key or position.

    cout << "Size: " << m.size() << endl;

    m.erase("Grade");
    cout << "New Size: " << m.size() << endl;

    m.erase(m.begin(),m.end());
    cout << "New Size2: " << m.size() << endl;

    cout << endl;

    // 10. find(const Key& key) : Returns an iterator to the element with the given key, or end() if the key is not found.
    
    unordered_map<string,string> s;

    s.insert(make_pair("Coffee","Brown"));
    s.insert(make_pair("Milk","White"));
    s.insert(make_pair("MangoShake","Yellow"));

    if(s.find("MangoShake") != s.end()){
        cout << "Key Found !" << endl;
    }
    else{
        cout << "Key Not Found !" << endl;
    }

    cout << endl;

    // 11. count(const Key& key) : Returns the number of elements with the specified key (1 or 0 sice std::map does not allow duplicate keys).

    cout << s.count("Coffee") << endl;  // returns 1

    if(m.count("Coffee") == 0){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key Found" << endl;
    }

    cout << endl;


    // Ordered map

    map<string,string> n;

    n.insert(make_pair("Pen","Write"));
    n.insert(make_pair("Eraser","Erase"));
    n.insert(make_pair("Food","Eat"));

    cout << "Size of ordered maP:" << n.size() << endl;

    if(n.empty() == true){
        cout << "Ordered map is empty" << endl;
    }
    else{
        cout << "Ordered map is not empty" << endl;
    }

    cout << endl;

    // traverse in ordered manner - alphabetical order (on the basis of key)
    map<string,string> :: iterator it2 = n.begin();
    while(it2 != n.end()){
        pair<string,string> str = *it2;
        cout << str.first << " " << str.second << endl;
        it2 ++;
    }
    cout << endl;
    return 0;
}