#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    int k;
    int program;
    cout << "Enter the size of the Vector: ";
    cin >> size;
    
    vector <int> nums(size);
    cout << "Enter the elements of the vector: \n" ;
    for (int i=0;i<size;i++)
    {
        cin >> nums[i];
    }

    cout << "\nChoose the Program that you want to use: " << endl;
    cout << "Enter 0 for Left Shift" << endl;
    cout << "Enter 1 for Right Shift" << endl;
    cin >> program;

    if(program==0)
    {

        cout << "\nEnter the number of positions you want to shift the vector by: ";
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
    }
    else
    {
        cout << "\nEnter the number of positions you want to shift the vector by: ";
        cin >> k;

        int temp2 = 0;
        int last = size-1;

        cout << "\nInitial Vector: " << endl;
        for (int i=0;i<size;i++)
        {
            cout << nums[i] << ",";
        }

        for (int i=0;i<k;i++)
        {
            temp2 = nums[last];
            
            for(int j=size-1;j>=0;j--)
            {
                nums[j] = nums[j-1];
                
            }
            
            nums[0] = temp2;
        }
    }

    cout << "\nFinal Vector: " << endl;
    for (int i=0;i<size;i++)
    {
        cout << nums[i] << ",";
    }

    cout << "\n\nBYE~" << endl;

    return 0;

}