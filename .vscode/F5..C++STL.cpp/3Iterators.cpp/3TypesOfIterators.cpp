#include<iostream>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

    // TYPES OF ITERATORS :

    // 1. Input Iterator (read only, forward moving) : These iterators can only be used for reading values from a container in a forward direction. They are typically used for algorithms that need to raed data from a container, such as find or for_each.

    // Example1 : create an input iterator to read values from cin
    // istream_iterator<int> input_itr(cin);

    // 2. Output Iterator (write only, forward moving) : These iteartors can only be used for writing values to a container in a forward direction. They are less commonly used compared to other iterator types.

    // Example2 : create an output iterator to write integers to the console
    // ostream_iterator<int> output_itr(cout," ");

    // 3. Forward Iterator (read/write, forward moving) : These iteartors combine the capabilities of both input and output iterators. They allow reading and writing values in a firward direction. Many container types, like lists,support forward iterations.

    // Example3 : 
    // forward_list<int> list;  // singly linked list
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // // traverse using iterator
    // // read

    // forward_list<int>:: iterator itr = list.begin();
    // while(itr != list.end()){
    //     cout << *itr << " ";
    //     itr ++;
    // }
    // cout << endl;

    // // write

    // forward_list<int> :: iterator itr2 = list.begin();
    // while(itr2 != list.end()){
    //     *itr2 = (*itr2) + 5;
    //     cout << *itr2 << " ";
    //     itr2 ++;
    // }
    // cout << endl;

    // cout << endl;

    // 4. Bidirectional Iterator (read/write, forward/backward moving) : These iterators can move both forward and backward within a container. They are supported by containers like lists and double ended queues(deques).

    // Example4 :
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    list<int> :: iterator itr = l.begin();
    while(itr != l.end()){
        // writing 
        *itr = *itr + 2;
        // read
        cout << *itr << " ";
        // forward move
        itr ++;
    }
    cout << endl;

    list<int> :: iterator itr2 = l.end();
    while(itr2 != l.begin()){
        itr2 --;
        cout << *itr2 << " ";
       
    }
    cout << endl;

    cout << endl;

    // 5. Random Access Iterator (read/write, forward/backward, random access) : These iterators offer full navigation capabilities, allowing you to move to any element within a container in constant time.Vectors, arrays, and deque provide random access iterators.

    // Example5 :
    vector<int> a = {1,2,3,4};

    vector<int> :: iterator i1 = a.begin();
    while(i1 != a.end()){
        //writing
        *i1 = *i1 -1;
        //read
        cout << *i1 << " ";
        // forward move
        i1 ++;
    }
    cout << endl;

    vector<int> :: iterator i2 = a.end();   // or a.end()-1
    while(i2 != a.begin()){
        // backward move
        i2 --;
        // read
        cout << *i2 << " ";
    }
    cout << endl;

    // randomly access
    vector<int> nums = {10,20,30,40,50};

    vector<int> :: iterator iter = nums.begin() + 3;
    cout << *iter << endl;


    // OPERATORS SUPPORTED BY ITERATORS : 

    // 1. input iterator : ++,*,->,==,!=
    // 2. output iterator : ++,*,=
    // 3. forward iterator : ++,*,->,==,!=
    // 4. bidirectional iterator : ++,--,*,->,==,!=
    // 5. random access iterator : ++,--,*,->,[],+,-,<,<=,>,>=,==,!=
 
    return 0;
}