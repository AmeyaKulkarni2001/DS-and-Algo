#include <bits/stdc++.h>
using namespace std;

int arrMinJumps(int arr[],int n){
    if(n==1){
        return 0;
    }
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + arr[i] >= n - 1) {
            int curr = arrMinJumps(arr, i + 1);
            if (curr != INT_MAX)
                res = min(res, curr + 1);
        }
    }
 
    return res;
}

int main(){
    int arr[] = {1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << arrMinJumps(arr,n);
}