#include <iostream>
#include <set>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n, m; cin >> n >> m;
    multiset<int> tickets;
    for (ll i = 0; i < n; i++) {
        ll price; cin >> price;
        tickets.insert(-price);
    }
    for (ll i = 0; i < m; i++) {
        ll items; cin >> items;
        auto it = tickets.lower_bound(-items);

        if (it == tickets.end()) 
            cout << "-1\n";
        else {
            cout << -*it << endl;
            tickets.erase(it);
        }
    }
}