#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        for (int i = 0; i < 3; i++) {
            int arr[3];
            for (int i = 0; i < 3; i++) {
                char a; cin >> a;
                if (a != '?')arr[i] = a;
                else arr[i] = 0;
            }

            int ans = 198 - (arr[0] + arr[1] + arr[2]);
            (ans)== 0 ? cout << "" : cout << static_cast<char>(ans);

        }
        cout << "\n";
    }
}