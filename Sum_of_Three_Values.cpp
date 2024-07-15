#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {

    int n, x; cin >> n >> x;

    vector<pair<ll, int>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first;
        vec[i].second = i + 1;
    }

    sort(vec.begin(), vec.end());

    bool found = false;

    for (int i = 0; i < n; i++) {
        int target = x - vec[i].first;
        int left = i + 1, right = n - 1;

        while (left < right) {
            ll sum = vec[left].first + vec[right].first;

            if (sum == target) {
                cout << vec[i].second << " " << vec[left].second << " " << vec[right].second;
                found = true;
                return 0;
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
    }

    if (!found) {
        cout << "IMPOSSIBLE";
    }


    return 0;
}
