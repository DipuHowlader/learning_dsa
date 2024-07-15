#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; scanf("%d", &t);

    while (t--) {
        int n, k, ans = 0;
        scanf("%d %d", &n, &k);
        while (n--) {
            int element;
            scanf("%d", &element);
            if (element == k) ans = 1;

        }

        ans ? printf("YES \n") : printf("NO \n");

    }
}