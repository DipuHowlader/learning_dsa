#include<iostream>
#include <vector>
using namespace std;
const int N = 1e5;

vector<int>g[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int n, m, k, c; cin >> n >> m >> k >> c;

        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }


    }
    return 0;
}