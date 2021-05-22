#include <bits/stdc++.h>
using namespace std;

int arr3Sum(int arr[],int n,int sum){
    int l,r;
    for(int i =0;i<n;i++){
        sort(arr,arr+n);
        l = i+1, r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r] == sum){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                return true;
            }
            else if(arr[i]+arr[l]+arr[r] < sum){
                l++;
            }
            else{
                r++;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 22;
    arr3Sum(arr,n,sum);

    return 0;
}