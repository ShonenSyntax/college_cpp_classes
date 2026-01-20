// Set stores unique elements only
// Set always gives a sorted output

//for finding element we have the find() function

//set<int>s;

//s.insert(10);

//s.erase(); Set does not store elements like vectors, i.e it doesn't store the 
// the new values at the end, so when deleting an element, we need to mention
// the element that has to be deleted

//there is no concept of capacity in set

//Create an empty set, Add 3 elements, find it's size,
//Display the elements add 1 more element, remove 2 element,display all elements
//and find the size again. v.size()

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(20);
    s.insert(40);
    s.insert(60);
    
    cout<< "\nInitial size of the Set is: " << s.size() << "\n" << endl;
    for(int a:s){
        cout<< a << endl;
    }

    s.insert(80);
    s.erase(40);
    s.erase(60);

    cout << "-----------------------------------" << endl;

    for(int a:s) {
        cout << a << endl;
    }

    cout<< "\nFinal size of the Set is: " << s.size() << endl;

    return 0;
}