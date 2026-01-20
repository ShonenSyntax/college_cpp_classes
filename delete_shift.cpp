//Take a dynamic array and delete an element by it's index or by it's value itself
//entered by the user and left shift the elements that come after it

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size,program,index,value;

    cout << "Enter the size of Array: " ;
    cin >> size;
    vector <int> nums(size);

    cout << "Enter the elements of the Array: " << endl;
    for(int i=0;i<size; i++)
    {
        cin >> nums[i];
    }

    cout << "\nChoose the Program that you want to use: " << endl;
    cout << "Enter 0 for Delete by Index" << endl;
    cout << "Enter 1 for Delete by Value" << endl;
    cin >> program;

    if(program==0)
    {
        cout << "\nWelcome to Delete by Index Program!" << endl;
        cout << "Enter the index for deletion: " ;
        cin >> index;
        
        cout << "\nElements before Deletion are: " << endl;
        for (int i = 0; i < size; i ++)
            cout << nums[i] << " " ;

        for (int i=index; i< size - 1; i++)
        {
            nums[i] = nums[i+1];
        }

        cout << "\nElements after Deletion are: " << endl;
        for (int i = 0; i < size - 1; i ++)
            cout << nums[i] << " " ;

        return 0;
    }

    else if(program == 1)
    {
        cout << "\nWelcome to Delete by Value Program!" << endl;
        cout << "Enter the Value for deletion: " ;
        cin >> value;   

        cout << "\nElements before Deletion are: " << endl;
        for (int i = 0; i < size; i ++)
            cout << nums[i] << " " ;

        for(int i=0; i<size; i++)
        {
            if (nums[i] == value)
                index = i;
        }

        for (int i=index; i< size - 1; i++)
        {
            nums[i] = nums[i+1];
        }

        cout << "\nElements after Deletion are: " << endl;
        for (int i = 0; i < size - 1; i ++)
            cout << nums[i] << " " ;

        return 0;
        
        
    }

}