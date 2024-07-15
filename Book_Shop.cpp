#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
int modulo = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int>prices(n), pages(n);
    vector<vector<int>>dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++) {
        cin >> prices[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> pages[i];
    }

    for (int i = 0; i <= x; i++) {
        dp[0][i] = 0;
    }

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            if (prices[i]- j >= 0) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(pages[i] + dp[i-1][j-prices[i]],  dp[i-1][j]);
            }
        }

    }


    cout << dp[n][x];

}