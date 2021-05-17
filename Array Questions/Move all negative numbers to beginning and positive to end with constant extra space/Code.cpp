#include <bits/stdc++.h>
using namespace std;



void arrLeftne(int arr[],int n){
    int i = 0,pivot = 0;
    for(int j = 0; j<n; j++){
        if(arr[j]<pivot){
            if(j!=i){
                swap(arr[j],arr[i]);
                i++;
            }
        }
    }
}

void arrDisplay(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n<< endl;
    arrDisplay(arr,n);
    arrLeftne(arr,n);
    arrDisplay(arr,n);
}