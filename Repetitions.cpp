#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int counter = 1;
    int maxx = 1;

    for (size_t i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            counter++;
            maxx = max(maxx, counter);
        }
        else
            counter = 1;
    }

    cout << maxx;
}