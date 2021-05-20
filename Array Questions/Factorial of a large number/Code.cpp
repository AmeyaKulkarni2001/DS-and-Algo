#include <bits/stdc++.h>
using namespace std;

int arrCreate(int arr[],int n){
    for(int i = 0;i<n;i++){
        arr[i] = n-i;
    }
}

int arrDisplay(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int factorial(int arr[],int n){
    if(arr[0] == 0){
        cout << 1;
    }
}

int main(){
    int arr[] = {};
    int n = 4;
    arrCreate(arr,n);
    arrDisplay(arr,n);
}