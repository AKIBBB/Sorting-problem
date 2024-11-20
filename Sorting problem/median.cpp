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

double findMedian(int arr[], int n) {
    if (n % 2 == 0) {
        
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } 
    else {
        
        return arr[n / 2];
    }
}

int main() {
    int arr[] = {11,9,17,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "The median is: " << findMedian(arr, n) << endl;

    return 0;
}
