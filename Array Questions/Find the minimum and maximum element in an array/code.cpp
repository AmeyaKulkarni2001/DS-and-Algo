#include <bits/stdc++.h>
using namespace std;

int min (int arr[], int n){
    return *min_element(arr, arr + n);
}
int max (int arr[], int n){
    return *max_element(arr, arr+n);
}

int main(){
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum number of the array is: "<< min(arr,n)<<"\n";
    cout << "Maximum number of the array is: "<< max(arr,n);
    return 0;
}
