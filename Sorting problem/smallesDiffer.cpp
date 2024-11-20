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

int findSmallestDifference(int arr[], int n) {
    int minDiff = INT_MAX; 
    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff; 
        }
    }
    return minDiff;
}
int main()
{
    int arr[] = {15,7,2,12,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    int smallestDifference = findSmallestDifference(arr, n);
    cout << "The smallest difference is: " << smallestDifference << endl;
    
    return 0;
}