//Left rotate an array by k positions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    int k;
    cout << "Enter the size of the Vector: ";
    cin >> size;
    
    vector <int> nums(size);
    cout << "Enter the elements of the vector: \n" ;
    for (int i=0;i<size;i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the number of positions you want to shift the vector by: ";
    cin >> k;

    int temp1 = 0;
    int last = size-1;

    cout << "\nInitial Vector: " << endl;
    for (int i=0;i<size;i++)
    {
        cout << nums[i] << ",";
    }

    for (int i=0;i<k;i++)
    {
        temp1 = nums[0];
        
        for(int j=0;j<size;j++)
        {
            nums[j] = nums[j+1];
            
        }
        
        nums[last] = temp1;
    }

    cout << "\nFinal Vector: " << endl;
    for (int i=0;i<size;i++)
    {
        cout << nums[i] << ",";
    }

    return 0;
}
