#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int modulo = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);


    int n; cin >> n;
    vector<vector<ll>>dp(n, vector<ll>(n, 0));

    char grid[n][n];

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j] == '.' ? 1 : 0;
            }else if(i==0){
                dp[i][j] = grid[i][j] == '.' ? dp[i][j-1] : 0;
            }else if(j==0){
                dp[i][j] = grid[i][j] == '.' ? dp[i-1][j] : 0;
            }

        }

    }

    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j < n; j++) {
            if (grid[i][j] == '.') {
                dp[i][j] = (dp[i][j - 1] + dp[i-1][j] )% modulo;
            }

        }

    }

    cout << dp[n - 1][n - 1];

}