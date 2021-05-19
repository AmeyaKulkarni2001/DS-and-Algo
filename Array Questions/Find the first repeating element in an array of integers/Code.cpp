#include <bits/stdc++.h>
using namespace std;

void arrRepeat(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" Is the first repeating number";
                break;
            }
        }
    }
}

int main(){
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrRepeat(arr,n);
}