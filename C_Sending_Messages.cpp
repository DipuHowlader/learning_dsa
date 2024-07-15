#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        bool all_send = false;

        while (n--) {
            int initial_phone_charge = f;
            initial_phone_charge -= a;
        }
        cout << (f<=0 ? "YES" : "NO") << "\n";
    }

}