#include <iostream>
using namespace std;

int print(int n, bool last_digit = false) {
    if (n <= 10) {
        cout << n << " ";
        return 0;
    }

    print(n / 10, (n<100) ?  true : false);

    cout << n % 10;
    cout  << (last_digit ? "" : " ");
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        print(n, true);
        cout << endl;
    }



}