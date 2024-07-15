#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int len; cin >> len;
        if (len == 1) {
            cout << 1 << "\n" << "1 0";
        }

        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
    }
    return 0;
}