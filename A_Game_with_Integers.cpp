#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        if (n % 3 == 0){
            cout << "Second\n";
            continue;
        }

        cout << "First\n";
    }
}