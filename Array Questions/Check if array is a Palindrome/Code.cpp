#include <bits/stdc++.h>
using namespace std;

int arrPali(int arr[],int n){
    int j = n-1, i = 0,flag;
    while(i<n){
        if(arr[i] == arr[j]){
            i++, j--;
            flag = 0;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return 1;
    }
}

int main(){
    int arr[] = {1,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(arrPali(arr,n)){
        cout << "true";
    }
    else{
        cout << "false";
    }

}