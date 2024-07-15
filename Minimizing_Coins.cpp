#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n, x; cin >> n >> x;
    vector<ll>dp(x + 1, INT32_MAX);
    vector<ll>coins(n);
    dp[0] = 0;
    for (ll i = 0; i < n; i++)
        cin >> coins[i];

    for (ll j = 1; j <= x; j++) {
        for (ll i = 0; i < n; i++) {
            if (j >= coins[i])
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
        }

    }

    if(dp[x] == INT32_MAX)
        cout << -1;
    else
        cout << dp[x];

}