#include<bits/stdc++.h>
using namespace std;

void arrMissing(int arr[],int n){
    sort(arr,arr+n);
    int x = arr[0];
    
    for(int i = 0;i<n;i++){
        if(x == arr[i]){
            x++;
        }
        else{
            cout<<x;
            break;            
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrMissing(arr,n);
}