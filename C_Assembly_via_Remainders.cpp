#include<iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int len; cin >> len;
        int a[len];
        for (int i = 0; i < len - 1; i++) {
            cin >> a[i];
        }
        int x = a[0] + 1;
        for (int i = 0; i < len; i++) {
            cout << x << " ";
            x = x*abs(len/x) + a[i];

        }
        cout << endl;

    }
    return 0;
}