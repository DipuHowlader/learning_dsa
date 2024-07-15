#include <iostream>
#include <vector>
using namespace std;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
void dfs(int i, int j, vector<vector<bool>>& visited, vector<vector<char>>& grid, int n, int m) {
    visited[i][j] = true;

    for (int k = 0; k < 4; k++) {
        int new_i = i + dy[k];
        int new_j = j + dx[k];
        if (new_i >= 0 && new_i < n && new_j >= 0 && new_j < m && !visited[new_i][new_j] && grid[new_i][new_j] == '.') {
            dfs(new_i, new_j, visited, grid, n, m);
        }
    }


}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m));
    vector<vector<bool>>visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }

    }
    int room = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j, visited, grid, n, m);
                room++;
            }
        }

    }
    cout << room;



    return 0;
}
