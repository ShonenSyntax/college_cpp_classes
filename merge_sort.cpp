#include <iostream>
#include <vector>
using namespace std;


void merge(vector <int>& arr,int left,int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    //Creating temp vectors
    vector <int> L(n1),R(n2);

    for(int i=0;i<n1;i++)
        L[i] = arr[left + i];
    for (int j=0;j<n2;j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    //Merge the temp vectors back
    //into arr[left...right]

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copy the remaining elements of L and R
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergesort(vector <int>& arr,int left,int right){

    if (left < right){

        int mid = left + (right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main(){
    int size;
    cout << "Enter the size of the Vector: ";
    cin >> size;
    vector <int> arr(size);
    cout << "Enter the elements of the Vector: " << endl;
    for ( int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "\nBefore Merge: ";
    for (int x : arr)
        cout << x << " ";
    
    mergesort(arr,0,arr.size()-1);

    cout << "\nAfter Merge: ";
    for(int x : arr)
        cout << x << " ";

    return 0;
}