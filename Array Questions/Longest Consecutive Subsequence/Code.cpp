#include <bits/stdc++.h>
using namespace std;

int arrDisplay(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int arrSub(int arr[],int n){
    sort(arr,arr+n);
    arrDisplay(arr,n);
    int count,max = 0;
    for(int i= 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+1 == arr[j]){
                count++;
                cout<<"\n count"<<count;
            }
            if(arr[i]+1 != arr[j]){
                if(count>max){
                    max = count;
                    cout<<max<<" "<<i<<" "<<j;
                    count = 0;
                } else{
                    count =0;
                }
            }
        }
    }
    return max;
}

int main(){
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrSub(arr,n);
}