#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; scanf("%d", &t);

    int j = 1;
    while (j <= t) {
        int num, rev_num = 0, len = 0;
        scanf("%d", &num);
        for (int i = num; i != 0; i /= 10) len++;
        for (int i = num; i != 0; i /= 10) rev_num = (i % 10) + (rev_num * 10);
        if (num == rev_num) printf("Case %d: Yes \n", j);
        else printf("Case %d: No \n", j);
        j++;
    }
}