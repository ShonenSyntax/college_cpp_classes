//Vector behaves like a dynamic array that can grow or shrink based on our requirements
// STL - Standard Template Library

// vector<int>v;  (v is the name of the vector) (size is not defined yet, it's an empty vector)
// vector<int> v = {1,2,3};

// v.push_back(5);

//In vector, the capacity always increases by twice
//Now capacity of v is 5 and size is 4?


//Create an empty vector, Add 3 elements, find it's size and capacity,
//Display the elements add 1 more element, remove 2 element,display all elements
// and find the size and capacity again. v.size(), v.capacity()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<< "\nInitial Size: " << v.size() << endl;
    cout<< "\nInitial Capacity: " << v.capacity() << endl;

    cout << "\nElements: \n";
    for(int a:v) {
    cout<< a << endl;
 }

    v.push_back(4);
    v.pop_back();
    v.pop_back();

    cout << "\nElements after removing 2 elements: \n";
    for(int a:v) {
        cout << a << endl;
    }
    
    cout<< "\nFinal Size: " << v.size() << endl;
    cout<< "Final Capacity: " << v.capacity() << endl;

    return 0;
}