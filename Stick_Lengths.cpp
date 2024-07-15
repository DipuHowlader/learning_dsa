#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, min_move = 0;
    cin >> t;
    vector<ll> vec(t);

    for (ll i = 0; i < t; i++) 
        cin >> vec[i];

    sort(vec.begin(), vec.end());
    int mid = vec[t/2];
    for (const int& ele : vec) {
        min_move += abs((ele - mid));
    }
    cout << min_move;

}