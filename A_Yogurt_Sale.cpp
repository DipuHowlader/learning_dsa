#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (b * 2 <= c) {
            cout << a * b;
        } else {
            if (a % 2) {
                cout << ((a-1)/2)*c +b;
            }else{
                 cout << (a/2)*c;
            }

        }
        cout << endl;
    }
    return 0;
}