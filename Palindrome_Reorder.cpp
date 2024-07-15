#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    map<char, int> mp;

    for (char ch : str)
        mp[ch]++;
    char foundChar = '/0';


    if (str.size() % 2 != 0) {
        for (char ch : str) {
            if (mp[ch] == 1 || mp[ch] %2 != 0) {
                foundChar = ch;
                break;
            }
        }
    }
    int flag = 1;
    for (char ch : str) {
        if (mp[ch] % 2 != 0 && ch != foundChar) {
            flag = 0;
        }
    }
    if (flag) {
        for (auto ch : mp) {
            for (int i = 0; i < ch.second / 2; i++) {
                cout << ch.first;
            }
        }
        if(str.size() % 2 != 0){
            cout << foundChar;
        }
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            auto ch = *it;
            for (int i = 0; i < ch.second / 2; i++) {
                cout << ch.first;
            }
        }
    }
    else {
        cout << "NO SOLUTION";
    }
}
