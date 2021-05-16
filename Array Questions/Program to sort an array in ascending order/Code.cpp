#include <iostream>
using namespace std;

int arrDisplay(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << arrDisplay(arr, n)<< " Is the sorted arr ";
}

int main(){
    int arr[] = {0, 23, 14, 12, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< arrDisplay(arr , n)<<" Is the initial arr " << "\n";
    bubbleSort(arr,n);
}