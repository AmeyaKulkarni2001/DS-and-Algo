#include <bits/stdc++.h>
using namespace std;

void arrConti(int arr[],int n){
    int curr, max = 0;
    for(int i = 0; i<n;i++){
        curr = arr[i];
        for(int j = i+1; j<n;j++){
            curr += arr[j];
            if(curr>max){
                max = curr;
            }
        }
        if(curr>max){
            max = curr;
        }
    }
    cout <<max;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrConti(arr,n);
    return 0;
}