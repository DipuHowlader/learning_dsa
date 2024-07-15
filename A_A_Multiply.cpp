#include <iostream>
typedef long long ll;

using namespace std;

int main() {
    ll n, c, sum = 0, sum_1 = 0; cin >> n >> c;

    for (ll i = 0; i < n; i++) {
        ll items;  cin >> items;
        ll item = items;
        if (i >= 1 && i < n - 1) {
            item *= c;
        }
        sum += items;
        sum_1 += item;
    }
    cout << max(sum, sum_1);
    cout << sum;

    return 0;
}