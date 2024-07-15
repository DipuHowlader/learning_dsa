#include<iostream>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll d = (3 - b) % 3;

        if (d > c || (b%3 != 0 && b%3 + c < 3)) {
            cout << -1 << endl;
            continue;
        }


        cout << a + (b + d) / 3 + (c - d + 2) / 3 << endl;


    }
    return 0;
}