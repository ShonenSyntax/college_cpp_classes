#include <iostream>
using namespace std;

/* void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
} */

void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;

        while(j>0 && arr[j]>key){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for( int i=0;i<size;i++ ){
        cin >> arr[i];
    }
    insertion_sort(arr,size);
    for( int i=0;i<size;i++ ){
        cout << arr[i] << " ";
    }

    return 0;

}

/*void insertion_sort(int arr[],int size){
     for (int i=1;i<size;i++){
        int key = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>key)
                arr[j+1] = arr[j];
            else
                break;
            
        }
        arr[j+1] = key;
        
    }
} */