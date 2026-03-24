#include <iostream>
using namespace std;


void bubble_sort(int arr[],int size);
void print_arr(int arr[], int size);

int main(){

    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the Array: " << endl;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<< "Before Sorting: " << endl;
    print_arr(arr,n);
    bubble_sort(arr,n);
    cout << "\nAfter Sorting: " << endl;
    print_arr(arr,n);

    return 0;

}

void bubble_sort(int arr[],int size)
{
    int temp;
    bool swapped = false;
    for(int x=0;x<size-1;x++)
    {
        swapped = false;
        for(int y=0;y<size-x-1;y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y+1];
                arr[y+1] = arr[y];
                arr[y] = temp;
            }
        }

        if (swapped == false);
            break;
    }
}

void print_arr(int arr[],int size)
{ 
    for (int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}