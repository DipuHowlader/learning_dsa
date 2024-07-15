#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    string str = "codeforces";

    int t; cin >> t;
    while (t--) {
        int count = 0;
        string test; cin >> test;
        for (int i = 0; i < 10; i++) {
            if (str[i] != test[i]) {
                count++;
            }
        }

        cout << count << "\n";
    }





}