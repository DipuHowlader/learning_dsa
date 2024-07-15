#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) {
        int len; cin >> len;
        string str; cin >> str;
        int f1 = 0, l1 = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'B') {
                f1 = i;
                break;
            }
        }
        for (int i = str.size(); i >= 0; i--) {
            if (str[i] == 'B') {
                l1 = i;
                break;
            }
        }
        if (f1 == l1) {
            cout << "1\n";
        } else {
            cout << l1 - f1+1 << "\n";

        }


    }
}