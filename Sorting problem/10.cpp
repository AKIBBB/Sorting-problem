#include <iostream>
#include <vector>
using namespace std;

void sortTasksByDuration(vector<pair<int, int>>& tasks) {
    int n = tasks.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int durationA = tasks[j].second - tasks[j].first;
            int durationB = tasks[j + 1].second - tasks[j + 1].first;
            if (durationA > durationB) {
                pair<int, int> temp = tasks[j];
                tasks[j] = tasks[j + 1];
                tasks[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<pair<int, int>> tasks = {
        {2, 5}, {1, 2}, {4, 6}
    };
    sortTasksByDuration(tasks);
    for (const auto& task : tasks) {
        cout << "(" << task.first << "," << task.second<< ")" << ", ";
    }

    return 0;
}

