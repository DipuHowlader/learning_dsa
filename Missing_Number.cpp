#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum = 0, given = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        given += x;
    }
    sum = n * (n + 1) / 2;
    cout << sum - given;
}