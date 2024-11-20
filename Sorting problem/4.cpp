#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

void bubbleSortByAbs(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {3, -1, -4, 2, 5, -9};
    bubbleSortByAbs(arr);
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
