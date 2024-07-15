#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve() {
    int len; cin >> len;
    vector<int> vec(len), vecS(len);
    for (int i = 0; i < len; i++) {
        cin >> vec[i];
        vecS[i] = vec[i];
    }

    sort(vecS.begin(), vecS.end());

    for (int i = 0; i < len; i++) {
        if (vec[i] % 2 != vecS[i] % 2) {
            return false;
        }

    }

    return true;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}