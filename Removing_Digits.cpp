#include <iostream>
#include <vector>
using namespace std;

const int modulo = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);


  int n; cin >> n;
  vector<long long>dp(n + 1, INT32_MAX);
  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = i; j != 0; j /= 10) {
      int digit = j%10;
        dp[i] = min(dp[i], dp[i-digit]+1);
    }


  }

  cout << dp[n];

}