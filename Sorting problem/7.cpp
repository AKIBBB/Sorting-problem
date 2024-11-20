#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findLongestSequence(int arr[], int n){
    bubbleSort(arr, n);
    int count = 1;
    int longest = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            count += 1;
        }
        else if (arr[i] != arr[i - 1] + 1) {
            if (count > longest) {
                longest = count;
            }
            count = 1;
        }
    }
    if (count > longest) { 
        longest = count;
    }
    return longest;
}

int main() {
    int arr[2] = {5, 2};
    int result = findLongestSequence(arr, 2);
    cout << result;

    return 0;
}
