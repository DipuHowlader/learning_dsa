#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;     cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        if (k == 4 * n - 2) {
            cout << k + 1 / 2 << "\n";
        }
        if (k == 4 * n - 3) {
            cout << 2*n << "\n";
        }

    }



}