#include<iostream>
#include <vector>
using namespace std;

const int N = 1e5;
vector<bool>visited(N, false);
vector<vector<int>>g(N, vector<int>(0));


void dfs(int& i) {
    visited[i] = true;

    for (auto child : g[i]) {
        if (!visited[child])
            dfs(child);
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }


    vector<int>ans;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            ans.push_back(i);
            dfs(i);
        }
    }

    cout << ans.size() - 1 << endl;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[0] != ans[i]) {
            cout << ans[0] + 1 << " " << ans[i] + 1 << endl;
        }

    }



    return 0;
}