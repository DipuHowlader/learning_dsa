#include <iostream>
#include <vector>
using namespace std;

const int modulo = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> dp(x + 1, 0);
    vector<int>coins(n);

    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0)
                dp[i] = (dp[i] + dp[i - coins[j]]) % modulo;
        }

    }


    cout << dp[x];

}