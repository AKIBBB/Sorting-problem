#include <iostream>
using namespace std;
int kthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) { 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[k - 1]; 
}

int main() {
    int arr[] = {7,9,1,8,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << "The " << k << "-th smallest element is: " << kthSmallest(arr, n, k) << endl;

    return 0;
}
