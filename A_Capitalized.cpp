#include <iostream>
using namespace std;

typedef long long ll;

bool is_satisfied(const string& str) {
    if ((int(str[0]) >= 65 && int(str[0]) < 97)) {
        for (int i = 1; i < str.length(); i++) {
            if (!(int(str[i]) >= 97)) {
                return false;
            }
        }
        return true;
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;

    cout << (is_satisfied(str) ? "Yes" : "No");

}