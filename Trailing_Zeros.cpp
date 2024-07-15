#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int find_power(int base, int power){
    ll ans = 1;
    for(int i = 1; i <= power; i++){
        ans *= base;
    }
    return ans;
}

int main() {
    int n; cin >> n;
    ll ans = 0;
    int pow = 1;
    int val = find_power(5, pow);
    while (val <= n) {
        val = find_power(5, pow);
        ans += (int)n/val;
        pow++;
    }
    cout << ans;

}