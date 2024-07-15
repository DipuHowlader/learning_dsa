#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;

    for (ll i = 1; i <= n; i++) {
        ll a = i * i, total = (a * (a - 1)) / 2;
        total = total - (4*(i-1)*(i-2));
        cout << total << endl;
    }
}