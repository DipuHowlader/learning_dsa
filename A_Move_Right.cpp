#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;

    cout << 0;
    for (int i = 0; i < str.length()-1; i++) {
        cout << str[i];
    }

}