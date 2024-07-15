#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int N = 1e5;
vector<int> g[N];
vector<bool>visited(N, false);
vector<int>parents;

int n, m;

bool bfs(int src) {
    queue<int>q;
    q.push(src);
    visited[src] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if(node == n) return true;

        for (auto neighbor : g[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parents[neighbor] = node;
                q.push(neighbor);
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    parents.resize(N, -1);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    if (bfs(1)) {
        int path_length = 0;
        int node = n;
        vector<int> res;
        while (node != -1) {
            path_length++;
            res.push_back(node);
            node = parents[node];
        }
        cout << path_length << endl;
        for (int i = res.size() - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }

    } else {
        cout << "IMPOSSIBLE";
    }

    return 0;
};