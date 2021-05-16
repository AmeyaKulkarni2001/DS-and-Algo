#include <iostream>
#include <algorithm>
using namespace std;

int kSmall(int arr[], int n, int k){
    // for(int i = 0; i<n; i++){
    //     for(int j = 0;j<n-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // } OR we can 
    sort(arr, arr+n);
    cout<<arr[k-1];
    return 0;
}

int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    kSmall(arr,n,k);
}