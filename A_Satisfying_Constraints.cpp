#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;   cin >> t;

    while (t--) {
        int line;    cin >> line;
        vector<int> vec;
        vector<int> cannot_be;
        int start = 0, end = 0;
        while (line--) {
            int a, x;   cin >> a >> x;
            if (a == 1) {
                start = x;
            } else if (a == 2) {
                end = x;
            } else if (a == 3) {
                cannot_be.push_back(x);
            }
        }

        if (end - start <= 1) {
            cout << 0 << endl;
            break;
        }


        for (int i = start; i <= end; i++) {
            bool flag = true;
            for (int j = 0; j < cannot_be.size(); j++) {
                if (i == cannot_be[j]) flag = false;
            }
            if (flag) vec.push_back(i);
        }

        cout << vec.size() << endl;
    }
}