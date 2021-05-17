#include <bits/stdc++.h>
using namespace std;

void arrRangeCoff(int arr[], int n){
    float range = *max_element(arr, arr+n) - *min_element(arr,arr+n);
    float coff = range/(*max_element(arr, arr+n) + *min_element(arr,arr+n));
    cout<<range<<" is the range of the arr"<<"\n";
    cout<<coff<<" is the Coefficient Of Range"<<"\n";
}

int main(){
    int arr[] = {15, 16, 10, 9, 6, 7, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrRangeCoff(arr,n);
}


