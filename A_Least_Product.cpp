#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<pair<int, int>> minOperations(vector<int> arr) {
    int n = arr.size();
    int product = 1;
    int negatives = 0;
    int minAbsValue = numeric_limits<int>::max();
    int minAbsIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            return {};  // If there's a zero, product will be zero, no operations needed
        }

        product *= arr[i];

        if (arr[i] < 0) {
            negatives++;
            if (abs(arr[i]) < minAbsValue) {
                minAbsValue = abs(arr[i]);
                minAbsIndex = i;
            }
        }
    }

    vector<pair<int, int>> operations;

    if (product > 0) {  // All elements can be set to 0 except for one element with min absolute value
        for (int i = 0; i < n; ++i) {
            if (i != minAbsIndex) {
                operations.push_back({i + 1, 0});
            }
        }
        return operations;
    }

    if (negatives % 2 != 0) {  // If product is negative, all negatives except one with min absolute value should be set to 0
        for (int i = 0; i < n; ++i) {
            if (arr[i] < 0 && i != minAbsIndex) {
                operations.push_back({i + 1, 0});
            }
        }
        return operations;
    }

    // If there are still negative elements left after previous steps, set product to zero
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            operations.push_back({i + 1, 0});
        }
    }

    return operations;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        vector<int> array(n);

        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }

        vector<pair<int, int>> result = minOperations(array);

        cout << result.size() << endl;
        for (auto op : result) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
