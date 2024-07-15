#include <iostream>
#include <vector>
using namespace std;

const int modulo = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);


    int n, x; cin >> n >> x;
    vector<int>dp(x + 1, 0);
    dp[0] = 1;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= x; j++) {
            if (j - coins[i] >= 0) {
                dp[j] = (dp[j] + dp[j - coins[i]]) % modulo;
            }

        }

    }

    cout << dp[x];


}