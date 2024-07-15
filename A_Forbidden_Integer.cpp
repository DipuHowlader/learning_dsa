#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        int remainder = n / k;

        if (k == 1 && x == 1) {
            cout << "NO \n";
            continue;
        } else if (x == 1 && (n - remainder * k) == 1) {
            cout << "NO \n";
            continue;
        }
        cout << "YES \n";
        int i = k;
        if (x != 1) cout << n - k +1 << "\n";
        cout << k << " ";
        while (i < n) {
            if (x != 1) {
                i += 1;
                cout << 1 << " ";
            } else {
                i += k;
                cout << k << " ";
            }

        }



        cout << '\n';

    }

}