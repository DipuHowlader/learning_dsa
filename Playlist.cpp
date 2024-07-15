#include <iostream>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, long_seq = 0, seq = 0;
    cin >> n;
    vector<ll> vec(n);
    map<ll, int>playlist;

    for (ll i = 0; i < n; i++)
        cin >> vec[i];

    for (const ll& ele : vec) {

        if (!playlist.count(ele)) {
            seq++;
        }else{
            seq = 1;
            playlist.clear();
        }

        long_seq = max(seq, long_seq);
        playlist[ele]++;
    }

    cout << long_seq;

}