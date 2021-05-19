#include <bits/stdc++.h>
using namespace std;

void arrNonRep(int arr[],int n){
    for(int i =0;i<n;i++){
        int flag = 0;
        for(int j=0;j<n;j++){
            if(j != i){
                if(arr[i] == arr[j]){
                    flag =1;
                    break;
                }
            }  
        }
        if(flag == 0){
            cout<<"\n"<<arr[i]<<" Is the first non repeating int";
            break;
        } else{
            cout<<"\n"<<flag<<" Flag \n";
        } 
    }
}

int main(){
    int arr[]={-1, 2, -1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrNonRep(arr,n);
}