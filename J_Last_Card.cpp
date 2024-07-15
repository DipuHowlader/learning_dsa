#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int person, cards, a;
    cin >> person >> cards >> a;

    int ans = 0;
    for (int i = a; cards > 0; i++) {
        if (i > person)
            i = 1;
        ans = i;
        cards--;
    }

    cout << ans;

}