#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int count = 0;
        int n, m; cin >> n >> m;
        string str, new_str; cin >> str;
        string str2; cin >> str2;
        new_str = str;
        if (str.find(str2) != string::npos) {
            cout << 0 << "\n";
            continue;
        }
        while (true) {
            if (new_str.find(str2) != string::npos || new_str.length() >= str.length() + str2.length()) {
                break;
            }
            new_str += new_str;
            count++;
        }

        if (new_str.find(str2) == string::npos) {
            count = -1;
        }

        cout << count << "\n";

    }


}
