#include <iostream>
using namespace std;

int freq (int arr[], int n, int k){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == k){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {0, 5, 5, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    cout << freq(arr,n,x);
}