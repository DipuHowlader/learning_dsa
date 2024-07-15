#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        if ((a % 2 == 0 || b % 2 == 0)) {
            if ((a % 2 == 0) && a / 2 != b) {
                cout << "Yes \n";
            } else if ((b % 2 == 0) && b / 2 != a) {
                cout << "Yes \n";
            } else {
                cout << "No \n";
            }

        } else cout << "No \n";
    }
}