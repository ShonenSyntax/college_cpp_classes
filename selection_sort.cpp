#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    cout << "\nBefore Sorting: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    for (int i=0; i<size-1 ;i++){
        int min_index = i;
        for (int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        swap(arr[i],arr[min_index]);
    }

    cout << "\nAfter Sorting: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);

    return 0;
}
 
