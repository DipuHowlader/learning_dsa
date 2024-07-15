#include <iostream>
#include <vector>
#include <map>
 
typedef long long ll;
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, target_sum; cin >> n >> target_sum;
    map<int, int>mp;
    for (int i = 0; i < n; i++) {
        int item; cin >> item;
        int rest = target_sum - item;
        if (mp.count(rest)) {
            printf("%d %d", i + 1, mp[rest] + 1);
            return 0;
        }
        mp[item] = i;
    }
    printf("IMPOSSIBLE");
 
}
