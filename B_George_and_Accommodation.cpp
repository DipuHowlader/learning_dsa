#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t, count= 0;
    scanf("%d", &t);
    while (t--) {
        int p,c;scanf("%d %d", &p, &c);
        if (c > p+1) count++;

    }
    printf("%d", count);

    return 0;
}
