#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5;
vector<vector<int>>g(N, vector<int>());
vector<int>parents(N, -1);
vector<bool>visited(N, false);

int n, m;

void dfs(int i, int par) {
    parents[i] = par;
    visited[i] = true;

    for (auto child : g[i]) {
        if (child == par) {
            continue;
        }
        if (visited[child] && child != par) {
            vector<int> ans;
            while (child != i) {
                ans.push_back(child);
                i = parents[i];
            }

        } else {
            dfs(child, i);
        }
    }

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; ) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++) {
        if (parents[i] == -1) {
            dfs(i, -1);
        }

    }


}