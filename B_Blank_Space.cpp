#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    string str = "codeforces";

    int t; cin >> t;
    while (t--) {
        int count = 0, max = 0;
        int len; cin >> len;
        while (len--) {
            int item; cin >> item;
            if (item == 0)
                count++;
            else if (item == 1) {
                if (count > max)
                    max = count;
                count = 0;
            }

        }

        if (count > max) max = count;
        cout << max << "\n";
    }

}