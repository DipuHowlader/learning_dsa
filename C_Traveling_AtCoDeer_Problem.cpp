#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; scanf("%d", &n);
    int v; scanf("%d", &v);
    int max = v, min = v;
    n-=1;
    while (n--) {
        int v; scanf("%d", &v);
        if (v > max) max = v;
        if (v < min) min = v;
    }
       printf("%d",max-min);

}
