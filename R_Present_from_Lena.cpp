#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n; cin >> n;

    // upper half
    for (int j = 0; j <= n; j++) {

        // _SPACE

        for (int k = n - j - 1; k >= 0; k--) {
            cout << "  ";
        }


        for (int i = 0; i <= j; i++) {
            if (i == j) {
                cout << i;
            } else {
                cout << i << " ";

            }

        }

        for (int i = j - 1; i >= 0; i--) {
                cout <<" " << i;
        }

        cout << "\n";

    }


    // lower half
    for (int j = n - 1; j >= 0; j--) {

        // _SPACE

        for (int k = 0; k < n - j; k++) {
            cout <<"  ";
        }


        for (int i = 0; i <= j; i++) {
           if (i == j) {
                cout << i;
            } else {
                cout << i << " ";

            }
        }

        for (int i = j - 1; i >= 0; i--) {
                cout <<" " << i;
        }

        cout << "\n";

    }

}