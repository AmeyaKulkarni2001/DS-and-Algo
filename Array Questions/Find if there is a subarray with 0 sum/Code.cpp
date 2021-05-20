#include <bits/stdc++.h>
using namespace std;

void arrSubSum(int arr[],int n){
    int curr,i,j;
    for(i = 0; i<n; i++){
        curr = arr[i];
        for(j = i+1;j<n;j++){
            if(curr == 0){
                cout<<"True";
                break;
            }
            curr += arr[j];
        }
    }
    cout<<"False";
}

int main(){
    int arr[] = {-3, 2, 3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrSubSum(arr,n);
}