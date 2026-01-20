/*Develop a program to cout the occurences of a target 
element entered by the user (lower bound and upper bound)
the user will tell the lower index and upper index.
Lower bound is the minimum index at which it is found
Upper bound is the maximum index at which it is found*/


/*For each loop is different from the regular for loop as, inside the loop
instead of passing the index, we directly pass the sequence(set,list,array)
and out loop iterates over the values of the sequence itself*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size,target,lb=-1,ub=-1,count=0;
    cout << "Enter the size of the Array: " ;
    cin >> size;

    vector <int> nums(size);

    cout << "\nEnter the Elements of the Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << "\nEnter the Target: " ;
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if(nums[i] == target)
        {
            count++;
            ub = i;
            if(lb == -1)
                lb = i;
        }
    }

    cout << "\nTarget:" << target << "\n" << "Count:" << count << "\n" << "lowerbound:" << lb << "\n" << "upperbound:" << ub << endl;


    return 0;
}

