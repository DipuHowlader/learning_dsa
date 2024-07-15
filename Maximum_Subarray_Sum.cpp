#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    long long n, sum = 0, max_sum = INT32_MIN; cin >> n;
    for (int i = 0; i < n; i++) {
        long long num; cin >> num;
        sum = max(sum + num, num);
        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
}
