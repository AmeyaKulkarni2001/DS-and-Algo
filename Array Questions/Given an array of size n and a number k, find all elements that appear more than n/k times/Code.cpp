#include <bits/stdc++.h>
using namespace std;

void arrRepeat(int arr[],int n,int k){
    int num = n/k;
    sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        int count =0;
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count >= num){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[] = {2, 3, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    arrRepeat(arr,n,k);
}