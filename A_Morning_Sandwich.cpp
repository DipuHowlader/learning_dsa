#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;

    while (t--) {
        int bread, c, h;
        cin >> bread >> c >> h;
        int filling = c + h;
        int layer = min(bread -1, c+h);

        cout << layer*2 +1 << "\n";
    }

}