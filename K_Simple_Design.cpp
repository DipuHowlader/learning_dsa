#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while (t--) {
        int x, k, len = 0;
        cin >> x >> k;

        while (1) {
            int total = 0;
            for (int i = x; i != 0; i /= 10)
                total += i % 10;
            if (total % k == 0) {
                cout << x << "\n";
                break;
            }
            x++;
        }
    }
}