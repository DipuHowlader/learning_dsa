#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, min_coin_sum = 0;
    cin >> t;
    vector<ll> vec(t);

    for (ll i = 0; i < t; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());


    for (int i = 0; i <= t; i++) {
        if (vec[i] > min_coin_sum + 1) {
            cout << min_coin_sum+1;
            return 0;
        }

        min_coin_sum += vec[i];
    }

    cout << min_coin_sum + 1;

}