#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) {
        int len; cin >> len;
        vector<int> vec;
        while (len--) {
            int item; cin >> item;
            vec.push_back(item);
        }
        sort(vec.begin(), vec.end());
        int ans = 0;
        for (int i = 0; i < vec.size()-1; i++) {
            ans += vec[i + 1] - vec[i];
        }
        cout << ans << '\n';
    }
}