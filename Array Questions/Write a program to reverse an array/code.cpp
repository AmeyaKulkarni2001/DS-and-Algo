#include <iostream>
using namespace std;

int arrReversal(int arr[], int n){
    int start = 0, end = n-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
    }
}

int arrPrint(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<arrPrint(arr, n)<<" is the initial array" << "\n";
    arrReversal(arr,n);
    cout<<arrPrint(arr,n)<<" is the final array";
    return 0;
}