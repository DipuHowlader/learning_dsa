#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        map<int, int>mp;
        int n; cin >> n; n--;
        int ans; cin >> ans;
        if (ans == 2) {
            ans -=1;
        }else {
            ans = ans+1;
        }

        while (n--) {
            int item; cin >> item;
            int b1 = ans;
            if (b1 == item) 
                b1 += 1;

            if (mp.find(b1) == mp.end()) {
                mp[b1] == 1;
                ans = b1;
            }

            cout << ans;

        }
        cout << endl;

    }

    return 0;
}