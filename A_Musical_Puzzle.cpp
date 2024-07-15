#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int solve(vector<char>& vec) {
    map<string, int> mp;
    for (int i = 0; i < vec.size() - 1; i++) {
        string str = string(1, vec[i]) + string(1,vec[i + 1]);
        if (mp.find(str) == mp.end()) {
            mp[str] == 1;
        }
    }

    cout << mp.size() << endl;
    return 0;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int len; cin >> len;
        vector<char> vec;
        for (int i = 0; i < len; i++) {
            char item; cin >> item;
            vec.push_back(item);
        }
        solve(vec);
    }

}