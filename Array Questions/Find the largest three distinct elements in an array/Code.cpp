#include <bits/stdc++.h>
using namespace std;

void arrTGM(int arr[],int n){
    sort(arr,arr+n);
    for(int i = n-1;i>=n-3;i--){
        cout<<" "<<arr[i];
    }
    cout<<" are the three greatest values";
}

int main(){
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrTGM(arr,n);
}