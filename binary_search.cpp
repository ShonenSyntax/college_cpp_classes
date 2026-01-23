#include <iostream>
using namespace std;
/*
int main()
{
    int n, target,key=-1,mid;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in a sorted order: \n";
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    cin >> target;

    int left = 0;
    int right = n-1;

    while (left <= right)
    {
        mid = (left + right)/2;
        if(target == arr[mid])
        {
            key = mid;
            break;
        }
        else if(target>arr[mid])
        {
            left = mid+1;
        }
        else
            right = mid-1;
    }
    cout << "The index of the target is: " << key << endl;
}

*/

int binary_search(int arr[],int left,int right,int target)
{
    if (left <= right)
    {
        int mid = (left+right)/2;
        if(target == arr[mid])
            return mid;
        else if(target > arr[mid])
            return binary_search(arr,mid+1,right,target);
        else    
            return binary_search(arr,left,mid-1,target);
    }
    return -1; //Not Found
}

int main()
{
    int n, target;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter target: ";
    cin >> target;
    
    int result = binary_search(arr, 0,n-1,4);
    if (result != -1)
        cout << "Index: " << result << endl;
    else
        cout << "Not found!" << endl;
}