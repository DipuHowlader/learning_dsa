#include <iostream>
using namespace std;

int spaces(int num) {
    if (num == 0) {
        return 0;
    }
    cout << " ";
    spaces(num - 1);
}

int astrick(int star) {
    if (star == 0) {
        return 0;
    }

    cout << "*";
    astrick(star - 1);
}

int pyramid(int rn, int n, int row = 1) {
    if (row > rn) {
        return 0;
    }

    spaces(n - 1);
    astrick(row * 2 - 1);

    if (rn != row) {
        cout << "\n";
    }
    pyramid(rn, n - 1, row + 1);

}

int main() {
    int n;
    cin >> n;
    pyramid(n, n);

}