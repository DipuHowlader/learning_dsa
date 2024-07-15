#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = (ans * 2)%(int)(1e9 +7);
    }

    cout << ans;

}