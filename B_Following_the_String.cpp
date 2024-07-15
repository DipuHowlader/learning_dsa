#include <iostream>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;
    string str_con = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        map<char, int>mep;
        for (int i = 0;i < 26;i++) {
            mep[str_con[i]] = 0;
        }
        int len; cin >> len;
        while (len--) {
            int item; cin >> item;
            for (auto ch : mep) {
                if (item == ch.second) {
                    cout << ch.first;
                    mep[ch.first]++;
                    break;
                }

            }
        }
        cout << "\n";

    }
}