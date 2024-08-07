#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<int>dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j <= i)
                dp[i] = (dp[i] + dp[i - j]) % mod;
        }

    }


    cout << dp[n];


    return 0;
}