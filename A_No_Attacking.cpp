#include <iostream>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;

    scanf("%d", &t);

    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int c = min(n - a, (n + 1) / 2);

        if (a > n) {
            printf("No\n");
        } else {
            if ((n - a) * c >= b) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }

        }

    }







}