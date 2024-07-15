#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int size, mx = 0, diff = 0;
    ll min_move = 0;
    cin >> size;
    for (long i = 0; i < size; i++) {
        int x; cin >> x;
        mx = max(mx, x);
        diff = mx - x;
        min_move += diff;
    }

    cout << min_move;
    return 0;
}