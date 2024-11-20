#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
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
int main()
{
    vector<int>a={1,16,13,14,4};
    vector<int>b={15,4,12,5,3,7};
    a.insert(a.end(), b.begin(), b.end());
    bubbleSort(a);
    for(int num:a)
    {
        cout<<num<<" ";
    }
    return 0;
}