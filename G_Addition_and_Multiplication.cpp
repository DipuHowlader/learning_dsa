#include <iostream>

using namespace std;


int operation_a(int val) {
    return val * 2;

}

int operation_b(int val, int k) {
    return val + k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; scanf("%d %d", &n, &k);
    int val = 1;

    while (n--) {
        if (operation_a(val) < operation_b(val, k))
            val = operation_a(val);
        else
            val = operation_b(val, k);



    }

    printf("%d", val);

}