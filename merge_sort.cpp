#include <iostream>
using namespace std;

void merge(int arr[],int left,int mid, int right){
    int L = mid - left + 1;
    int R = right - mid;

    int arr1[L];
    int arr2[R];

    for(int i=0;i<L;i++){
        arr1[i] = arr[left + i];
    }

    for (int j=0;j<R;j++){
        arr2[j] = arr[mid+1 + j];
    }
    int i=0,j=0,k=left;

    while(i<L && j<R){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
        }

        else{
            arr[k] = arr2[j];
            j++;
        }

        k++;
    }

    while(i<L){
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while(j<R){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int left,int right){
    if(left<right){
        int mid = (left + right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for(int i=0;i<size;i++)
        cin >> arr[i];

    merge_sort(arr,0,size-1);

    cout << "\n\n";
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";

    return 0;
    
}