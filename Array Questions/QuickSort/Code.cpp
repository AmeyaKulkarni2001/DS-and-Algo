#include <bits/stdc++.h>
using namespace std;
 
void arrSwap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int arrPartition (int arr[], int start, int end)
{
    int pivot = arr[end]; 
    int i = (start - 1); 
 
    for (int j = start; j <= end - 1; j++)
    {
        
        if (arr[j] < pivot)
        {
            i++; 
            arrSwap(&arr[i], &arr[j]);
        }
    }
    arrSwap(&arr[i + 1], &arr[end]);
    return (i + 1);
}
 

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pi = arrPartition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
 