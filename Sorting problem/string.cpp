#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to sort strings by length
void sortByLength(vector<string>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths of adjacent strings
            if (arr[j].length() > arr[j + 1].length()) {
                // Swap if the current string is longer than the next one
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Input vector of strings
    vector<string> arr = {"elephant", "dog", "cat", "butterfly", "ant"};

    // Sort the vector by length
    sortByLength(arr);

    // Output the sorted vector
    cout << "Strings sorted by length:" << endl;
    for (const string& str : arr) {
        cout << str << endl;
    }

    return 0;
}
