#include<iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll cal(ll* arr, ll pw) {
    int cnt = 0, i = 0;
    while (pw > 0 && pw >= arr[i]) {
        pw -= arr[i];
        cnt++;
        i++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];
        } 

        if(sum <= k) {
            cout << n << endl;
            continue;
        }

        ll first, last;
        first = k / 2;
        last = k / 2;
        if (k & 1) first = k / 2 + 1;
        ll ans = 0;
        ans += cal(a, first);
        reverse(a, a + n);
        ans += cal(a, last);
        cout << ans << endl;
    }
    return 0;
}