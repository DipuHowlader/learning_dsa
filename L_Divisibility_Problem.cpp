#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << "\n";
        }else{
            int ans = (((a/b) + 1) * b) -a;
            cout << ans << "\n";
        }
    }
}