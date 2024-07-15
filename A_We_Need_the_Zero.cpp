#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int len, x = 0;
        cin >> len;
        for (int i = 0; i < len; i++) {
            int item; cin >> item;
            x = x ^ item;
        }



        if (len % 2) {
            cout << x << "\n";
        }
        else {
            if (x == 0) {
                cout << 0 << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }

    }
}