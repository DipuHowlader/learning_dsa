#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int c1, c2, c3, c4, r1, r2, r3, r4;
        cin >> c1 >> c2 >> c3 >> c4 >> r1 >> r2 >> r3 >> r4;

        if (c1 == c3) {
            int side = c1 - r3;
            cout << side * side << "\n";
        } else {
            int side = c3 - c1;
            cout << side * side << "\n";
        }
    }
}