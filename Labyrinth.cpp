#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;

bool is_valid(int& x, int& y) {
    if (x < 0 || x >= n || y >= m || y < 0) {
        return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    int dx[] = { 0,0,1,-1 };
    int dy[] = { 1,-1,0,0 };
    vector<vector<char>>grid(n, vector<char>(m, ' '));
    vector<vector<bool>>visited(n, vector<bool>(m, false));

    int source_i, source_j, destination_i, destination_j;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                source_i = i;
                source_j = j;
            } else if (grid[i][j] == 'B') {
                destination_i = i;
                destination_j = j;
            }
        }
    }


    queue<pair<int, int>>q;
    vector<vector<pair<int, int>>>parents(n, vector<pair<int, int>>(m));
    q.push({ source_i, source_j });
    visited[source_i][source_j] = true;
    bool found = false;
    int distance = 0;

    while (!q.empty()) {
        distance++;
        int k = q.size();
        while (k--) {
            auto current = q.front();
            q.pop();
            int x = current.first;
            int y = current.second;

            for (int i = 0; i < 4; i++) {
                int new_i = x + dx[i];
                int new_j = y + dy[i];
                if (is_valid(new_i, new_j) && grid[new_i][new_j] != '#' && !visited[new_i][new_j]) {
                    visited[new_i][new_j] = true;
                    parents[new_i][new_j] = { x, y };
                    q.push({ new_i, new_j });
                    if (new_i == destination_i && new_j == destination_j) {
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    if (found) {
        cout << "YES" << endl;
        cout << distance << endl;
        string ans;

        while (source_i != destination_i || source_j != destination_j) {
            int x = parents[destination_i][destination_j].first;
            int y = parents[destination_i][destination_j].second;

            if (x < destination_i && y == destination_j) {
                ans += "D";
            } else if (x > destination_i && y == destination_j) {
                ans += "U";
            } else if (x == destination_i && y > destination_j) {
                ans += "L";
            } else if (x == destination_i && y < destination_j) {
                ans += "R";
            }

            destination_i = x;
            destination_j = y;


        }
        reverse(ans.begin(), ans.end());
        cout << ans;



    } else {
        cout << "NO" << endl;
    }

    return 0;
}
