#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void absulute(int arr[],int n){
    for ( int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            
        }
    }
    
}

int main()
{
    int arr[] = {-10, 5,-3, 7,-2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}