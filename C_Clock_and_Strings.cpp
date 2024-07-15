#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        for (int i = 1; i <= 12; i++) {
            if (i == a || i == b) {
                s += 'a';
            }
            if (i == c || i == d) {
                s += 'b';
            }
        }
        cout << ((s == "abab" || s == "baba") ? "YES" : "NO")<< endl;

    }
    return 0;
}