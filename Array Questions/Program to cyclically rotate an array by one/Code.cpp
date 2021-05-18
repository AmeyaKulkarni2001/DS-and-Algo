#include <bits/stdc++.h>
using namespace std;

void arrDisplay(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void arrRotate(int arr[],int n){
    int x = arr[n-1];
    for(int i = n-1;i>=0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
    arrDisplay(arr,n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrRotate(arr,n);
}