#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    int t; cin >> t;
    while (t--) {
        bool flag = true;
        int len; cin >> len; len -= 1;
        int previous_number; cin >> previous_number;

        while (len--) {
            int num; cin >> num;
            if (num == 0) {
                previous_number = num;
                continue;
            }

            if (abs(num - previous_number) >= 2) {
                flag = false; break;
            }

            previous_number = num;
        }

        (flag) ? cout << "YES\n" : cout << "NO\n";

    }

}