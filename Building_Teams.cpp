#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;
const ll N = 1e5 + 5;

ll n, m;
vector<vector<ll>>g(N, vector<ll>());
vector<ll>colors(N, -1);

void dfs(int i, int c) {
    if (colors[i] != -1) {
        if (c != colors[i]) {
            cout << "IMPOSSIBLE";
            exit(0);
        } else {
            return;
        }

    }
    colors[i] = c;
    for (auto child : g[i]) {
        dfs(child, 3 - c);
    }

}

int main() {
    cin >> n >> m;

    for (ll i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (ll i = 0; i < n; i++) {
        if (colors[i] == -1) {
            dfs(i, 1);
        }
    }

    for (ll i = 1; i <= n; i++) {
        cout << colors[i] << " ";
    }


    return 0;
}