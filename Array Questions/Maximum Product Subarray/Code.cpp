#include <bits/stdc++.h>
using namespace std;

void arrMaxMul(int arr[],int n){
    int curr,max = 0;
    for(int i = 0;i<n;i++){
        curr = arr[i];
        for(int j = i+1;j<n;j++){
            if(curr > max){
                max = curr;
            }
            curr *= arr[j];
        }
        if(curr > max){
            max = curr;
        }
    }
    cout<<max;
}

int main(){
    int arr[] = {-1, -3, -10, 0, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrMaxMul(arr,n);
}
