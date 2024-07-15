#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;

    while (t--) {
        int val; cin >> val;
        if (val <= 26) {
            int last_char = val - 3;
            printf("%c%c%c\n", 'a', 'a', 97 + last_char);
        } else if (val == 27) {
            printf("%c%c%c\n", 'a', 'a', 'y');
        } else if (val >= 26 && val <= 26 * 2) {
            int second_car = val - 26-2;
            printf("%c%c%c\n", 'a', 'a' + second_car, 'z');
        } else if (val >= 2 * 26) {
            int char_ = val - 26 - 26 - 1;
            printf("%c%c%c\n", 'a' + char_, 'z', 'z');
        }

    }

}
