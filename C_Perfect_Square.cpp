#include<iostream>
#include<vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int highest = 0, ans = 0;
        vector<vector<char>>grid(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
                if (static_cast<int>(grid[i][j]) > highest) {
                    highest = grid[i][j];
                }

            }

        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != static_cast<char>(highest)) {
                    ans += abs(highest - grid[i][j]);
            }

        }
        cout << ans << endl;

    }
    return 0;
}
}