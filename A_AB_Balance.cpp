#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        string str; cin >> str;
        int ab = 0; int ba = 0;
        for (int i = 0; i < str.length() - 1; i++) {
            if (str.substr(i, 2) == "ab") ab++;
            else if (str.substr(i, 2) == "ba") ba++;
        }

        if (ab == ba) {
            cout << str << endl;
            continue;
        } else {
            if (abs(ab - ba) == 1) {
                if (str[0] == 'a') str[0] = 'b';
                else str[0] = 'a';
                cout << str << endl;
            }


        }


    }


}