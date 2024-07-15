#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;
    int s[100], e[100];

    while (t--) {
        int n, flag = 1; cin >> n;
        cin >> s[0] >> e[0];
        for (int i = 1; i < n; i++) {
            cin >> s[i] >> e[i];
             if (s[i] >= s[0] && e[i] >= e[0]) {
                flag = 0;
            }
        }
        cout << (flag ? s[0] : -1) << "\n";
    }

}