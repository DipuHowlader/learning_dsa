#include <iostream>
using namespace std;

int print(int n) {
    if (n <= 0) {
        return 0;
    }

    if (n == 1) 
        cout << n;
    else 
        cout << n << " ";


    print(n/10);
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n; cin >> n;
    print(n);

}