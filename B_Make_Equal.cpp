#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;


int solve(vector<int>& vec) {
    int total = accumulate(vec.begin(), vec.end(), 0);
    int required = total / vec.size();
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > required) {
            vec[i + 1] = vec[i + 1] + (vec[i] - required);
            vec[i] = required;
        } else if (vec[i] < required) {
            return 0;
        }
    }

    if (vec.back() != required || total % vec.size() != 0) {
        return 0;
    }

    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;      cin >> t;

    while (t--) {
        int len;    cin >> len;
        vector<int>vec;
        while (len--) {
            int item;  cin >> item;
            vec.push_back(item);
        }
        cout << (solve(vec) ? "YES" : "NO") << "\n";
    }
}