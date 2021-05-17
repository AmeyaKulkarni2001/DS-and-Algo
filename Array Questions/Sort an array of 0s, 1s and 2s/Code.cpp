#include <iostream>
using namespace std;

void arrDisplay(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl; 
}

void arrSort(int arr[], int n){
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else if(arr[i] == 2){
            count2++;
        }
    }
    for(int i = 0; i<count0; i++){
        arr[i] = 0;
    }
    for(int i = count0; i< count0+count1; i++){
        arr[i] = 1;
    }
    for(int i = count0+count1; i<n; i++){
        arr[i] = 2;
    }
}

int main(){
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrDisplay(arr,n);
    arrSort(arr,n);
    arrDisplay(arr,n);
    return 0;
}