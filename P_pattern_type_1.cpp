#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;
        int counter = 1;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= i; j++) {
                if (j == i) {
                    cout << counter;
                } else {
                    cout << counter << "*";
                }

                counter += 1;
            }
            cout << "\n";

        }
    }




}