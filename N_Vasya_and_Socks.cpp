#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int a, b;
    cin >> a >> b;

    int ans = a;

    int more_days = b;
    int next_days = a;

    while (a >= more_days) {

        ans++;
        a++;
        more_days += b;
    }

    cout << ans;
}