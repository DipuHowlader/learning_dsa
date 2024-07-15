#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    int t; cin >> t;
    while (t--) {
        long long anna, katie, total;
        cin >> anna >> katie >> total;
        if (total % 2 == 0) {
            if (anna > katie) {
                cout << "First\n";
            } else {
                cout << "Second\n";

            }
        } else {
            if (anna >= katie) {
                cout << "First\n";
            } else {
                cout << "Second\n";
            }


        }

    }

}