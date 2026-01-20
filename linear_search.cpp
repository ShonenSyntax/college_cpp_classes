#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    int find;
    cout << "Enter the size of the Array: ";
    cin >> size;
    
    vector <int> nums(size);
    cout << "Enter the elements of the array: \n" ;
    for (int i=0;i<size;i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the element whoes index you want to find: ";
    cin >> find;

    int index = 0;
    for(int x : nums)
    {
        if (x == find)
            cout << "Element found at Index: " << index << endl;
        index++;
    }

    return 0;
}
