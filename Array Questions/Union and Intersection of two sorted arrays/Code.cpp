#include <bits/stdc++.h>
using namespace std;

void arrDisplay(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrUnion(int arr1[], int arr2[],int n1, int n2){
    int arr3[n1+n2];
    int i;
    for(i = 0; i<n1; i++){
        arr3[i] = arr1[i];
    }
    for(int j = 0; j<n2; j++){
        arr3[i+j+1] = arr2[j];
    }
    sort(arr3,arr3+n1+n2);
    
    for(int j = 0; j<n1 + n2; j++){
        if(arr3[j] == arr3[j+1]) {
            for(int k=j+2; k<n1+n2; k++) {
                arr3[k-1] = arr3[k];
            }
        }
        arr3[n1+n2-1] = {};
    }
    arrDisplay(arr3,n1+n2);
}

void arrInter(int arr1[],int arr2[],int n1,int n2){
    int x = 0;
    int arr3[x];

    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n2;j++){
            if(arr1[i] == arr2[j]){
                arr3[x] = arr2[j];
                x++;
            }
        }
    }
    arrDisplay(arr3,x);
}

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    arrUnion(arr1,arr2,n1,n2);
    arrInter(arr1,arr2,n1,n2);
}