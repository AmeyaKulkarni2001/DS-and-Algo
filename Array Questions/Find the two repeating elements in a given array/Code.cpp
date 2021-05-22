#include<bits/stdc++.h>
using namespace std;
 
// void arrPrintRepeating(int arr[], int n)
// {
//     int i, j;
//     printf(" Repeating elements are ");
//     for(i = 0; i < n; i++)
//         for(j = i + 1; j < n; j++)
//         if(arr[i] == arr[j])
//             cout << arr[i] << " ";
// }
 

// int main()
// {
//     int arr[] = {4, 2, 4, 5, 2, 3, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     arrPrintRepeating(arr, n);
// }

////////////////////////////////// OR//////////////////////////////
 
void arrPrintRepeating(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(arr[abs(arr[i])] > 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else{
            cout<<abs(arr[i])<<" ";
        }
    }
}

int main(){
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrPrintRepeating(arr,n);
}