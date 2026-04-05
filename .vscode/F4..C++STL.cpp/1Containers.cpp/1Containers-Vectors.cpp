#include<iostream>
#include<vector>
using namespace std;

int main(){

    // 1-D ARRAY (using vector) :

    // creation of vector

    vector<int> marks;  // a vector is created with data type integer jiska name marks hai

    vector<int> miles(10);  // a vector is created with data type integer jiska name miles hai aur initially 10 blcoks hai

    vector<int> distance(15, 0); // a vector created jiska name distance hai aur initially 15 blocks hai aur saare blocks 0 se initialize hai

    // accessing a vector

    vector<int> detail(10,2);  // all 10 blocks are initialized with value 2
    for(int i : detail){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // Member functions 

    // 1. begin() : Returns an iterator pointing to the first element in the vector. (iterator is a standard way to traverse containers)

    vector<int> v(5, -1);
    cout << *(v.begin()) << endl;  // v.begin() - iterator pointing to first element, adding * to it gives the first element.

    vector<int> q = {1,2,3,4};
    cout << *(q.begin()) << endl;
    cout << *(q.begin()+1) << endl;
    cout << *(q.begin()+2) << endl;

    // 2. end() : Returns an iterator pointing to the position just after the last element in the vector.

    cout << *(v.end()) << endl;  // gives garbage value

    cout << endl;

    // 3. push_back(const T& value) : Adds an element to the end of the vector.
    // 4. pop_back() : Removes the last element from the vector 
    // 5. size() : Returns the number of elements in the vector.

    vector<int> number;

    number.push_back(10);  // adds 10 to the first position
    number.push_back(20);  // adds 20 to second position or nect position
    number.push_back(30);
    number.push_back(40);

    cout << "Size : " << number.size() << endl;  // returns size i.e 4

    for(int i : number){
        cout << i << " ";
    }
    cout << endl;

    number.pop_back(); // removes last inserted element i.e 40

    cout << "New Size : " << number.size() << endl;

    for(int i : number){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 6. front() : Accesses the first element in the vector
    // 7. back() : Accesses the last element in the vector

    cout << number.front() << endl;  // returns 10
    cout << number.back() << endl;   // returns 30 (last element)

    cout << endl;

    // 8. empty() : Checks whether the vector is empty (whether its size is 0)

    if(number.empty() == true){
        cout << "Vector is empty." << endl;
    }
    else{
        cout << "Vector is not empty." << endl;
    }

    if(marks.empty() == true){
        cout << "Vector is empty." << endl;
    }
    else{
        cout << "Vector is not empty." << endl;
    }

    cout << endl;

    // 9. operator [] (size_type n) : Accesses the element at the specified index without bounds checking (both access and modify)
    // Condition: jispe bhi square bracket lga rhe ho voh index exist krna chahiye (ya toh size assign ho yua value)

    vector<char> alphabets;
    alphabets.push_back('A');
    alphabets.push_back('B');
    alphabets.push_back('C');

    cout << "Element at index 0 : " << alphabets[0] << endl;
    cout << "Element at index 1 : " << alphabets[1] << endl;
    cout << "Element at index 2 : " << alphabets[2] << endl;

    alphabets[0]='Z';     // can modify also
    cout << "Element at index 0 : " << alphabets[0] << endl;   //value access

    // vector<int> prac;
    // cout << prac[0] << endl;   // segmentation fault

    vector<int> pr(10);
    cout << pr[0] << endl;     // ab chl jaega

    cout << endl;

    // 10. at(size_type n) : Accesses the element at the specified index with bounds checking
    
    cout << alphabets[1] << endl;
    cout << alphabets.at(1) << endl;   // both same work

    cout << endl;
    
    // 11. Capacity() : Returns the number of elements that the vector can hold before needing to allocate more spaces
    // (kitne blocks allocate hue hai)

    vector <float> num;

    cout << num.size() << endl;
    cout << num.capacity() << endl;   // by default initially capacity 0 aari hai

    num.push_back(1.2);
    num.push_back(2.2);
    
    cout << num.size() << endl;       // return 2
    cout << num.capacity() << endl;   // return 2 (initially 2 spaces use hui h)

    num.push_back(3.3);

    cout << num.size() << endl;       // return 3
    cout << num.capacity() << endl;   // return 4 (vector ne new element k liye apne size ko double krdia)

    num.push_back(4.4);
    num.push_back(5.5);

    cout << num.capacity() << endl;   // return 8 (again apne size ko double krlia)
    cout << num.size() << endl;       // returns 5 (jitne total element hai)

    cout << endl;

    // 12. Reserve(size_type n) : Requests that the vector capacity can be increased to at least n elements, potentially reducing the no. of reallocations
    //                             (for assigning minimum capacity) 

    vector <int> sales;
    cout << sales.capacity() << endl;  // initially 0 

    sales.reserve(10);
    cout << sales.capacity() << endl;  // return 10 , as min capacity is given i.e 10

    cout << endl;

    // 13. max_size() : Returns the maximum number of elements that the vector can hold due to system or library limitations.

    vector<int> age;
    vector<bool> isTrue;
    vector<char> character;
    vector<float> temp;

    cout << age.max_size() << endl;
    cout << isTrue.max_size() << endl;
    cout << character.max_size() << endl;
    cout << temp.max_size() << endl;

    cout << endl;

    // 14. clear() : Removes all the elements from the vector, which are destroyed and leaves it with size 0;

    vector<int> birth_date;

    birth_date.push_back(2);
    birth_date.push_back(6);
    birth_date.push_back(9);

    cout << birth_date.size() << endl;  // returns 3

    birth_date.clear();
    cout << birth_date.size() << endl;  // returns 0

    cout << endl;

    // 15. insert(iterator position, const T& value) : inserts the new element before the specified position in the vector

    vector<int> pos;

    pos.push_back(10);
    pos.push_back(20);

    pos.insert(pos.begin(), 50);  // adds new element at the starting before 10
    cout << pos.size() << endl;   // returns 3
    cout << pos[0] << endl;       // returns the first element in the vector

    pos.insert(pos.begin()+2,30);  // adds new element to index 2, third position 
    cout << pos.size() << endl;    // returns 4
    cout << pos[2] << endl;        // returns 30
 
    for(int i : pos){              // returns all the elements in the vector
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // 16. erase(iterator position) or erase(iterator first, iterator last) : Removes one or more elements from the vector starting at the specified position
    
    vector<char> a;

    a.push_back('A');
    a.push_back('b');
    a.push_back('C');
    a.push_back('d');
    a.push_back('e');

    cout << a.front() << endl;   // returns frist element i.e A

    a.erase(a.begin());          // erased first element
    cout << a.size() << endl;    // returns 4
    cout << a.front() << endl;   // returns b , as A is erased

    a.erase(a.begin()+1);        // erased c
    cout << a.size() << endl;    // returns 3
    cout << a.front() << endl;   // returns b

    for(char i : a){
        cout << i << " ";
    }
    cout << endl;

    a.erase(a.begin(),a.end());  // all elements are erased
    cout << a.size() << endl;    // returns 0

    cout << endl;

    // 17. swap(vector& x) : Swaps the contents of the vector with those of another vector of the same type, inclusing their sizes and capacities

    vector<int> one;
    one.push_back(1);
    one.push_back(2);
    one.push_back(3);
    one.push_back(4);
    one.push_back(5);
    cout << one.size() << endl;      // returns 5
    cout << one.capacity() << endl;  // returns 8

    vector<int> two;
    two.push_back(2);
    two.push_back(4);
    two.push_back(6);
    two.push_back(8);
    cout << two.size() << endl;      // returns 4
    cout << two.capacity() << endl;  // returns 4

    one.swap(two);  // both the vectors are swapped together

    cout << one.size() << endl;         // size changes to 4
    cout << one.capacity() << endl;     // capacity changes to 4
    cout << one[0] << endl;             // first element becomes 2
    cout << one[1] << endl;             // second element becomes 4

    cout << two.size() << endl;         // size changes to 5
    cout << two.capacity() << endl;     // capacity changes to 8
    cout << two[0] << endl;             // first element becomes 1
    cout << two[1] << endl;             // second element becomes 2

    cout << endl;

    // NORMAL LOOP FOR ACCESSING ALL ELEMENTS

    for(int i=0; i<one.size(); i++){    // prints all the elements of the given vector
        cout << one[i] << " ";
    }
    cout << endl;

    // ANOTHER METHOD FOR PRINTING - for each loop (applicable to containers)

    for(int i: one){                    // for each integer i inside vector one
        cout << i << " ";
    }
    cout << endl;

    for(int i: two){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

    // TRAVERSING VECTOR USING ITERATOR

    vector<int> i;

    i.push_back(100);
    i.push_back(200);
    i.push_back(300);
    i.push_back(400);

    //Create an iterator 
    vector<int>::iterator it = i.begin();   // :: operator is called scope resolution operator

    while (it != i.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    cout << endl;


    // 2D ARRAY (using vector) :

    vector<vector<int>> arr(5, vector<int>(4, 0)); 
    // 2D array created with 5 rows and 4 columns, with initial value of each cell as "0"

    int totalRows = arr.size();
    cout << totalRows << endl;

    int totalColumns = arr[0].size();
    cout << totalColumns << endl;

    cout << endl;


    // 2D array with different columns (JAGGED ARRAY- an array of arrays where each member array can be of a different size)

    vector<vector<int>> brr(4);
    // 2D array created with 4 rows 

    brr[0] = vector<int>(3);     // 1st row created with 3 columns 
    brr[1] = vector<int>(2);     // 2nd row created with 2 columns 
    brr[2] = vector<int>(5);     // 3rd row created with 5 columns
    brr[3] = vector<int>(6);     // 4th row created with 6 columns 

    int totalRowCount = brr.size();
    cout << totalRowCount << endl;

    for(int i=0; i<brr.size(); i++){
        int totalColumnCount = brr[i].size();
        cout << totalColumnCount << " ";
    }
    cout << endl;
    

    return 0;
}