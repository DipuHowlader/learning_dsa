#include <iostream>
#include <vector>

using namespace std;

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);


    int n;
    scanf("%d", &n);

    vector<int>vec;
    vector<int>ans;


    while (n--) {
        int item;
        scanf("%d", &item);
        vec.push_back(item);
    }
    int number = 0;

    for (int i = 0; i < n; i++) {

        for (int num : vec) {
            if (i + 1 < vec[i]) {
                cout << number;
                number = number*10 + vec[i];
                ans.insert(ans.begin() + i, vec[i]);
                vec.erase(vec.begin() + i);
            }
        }
    }

    long long answ = (number) % 998244353;

    cout << number;

    cout << (answ);

    return 0;


}