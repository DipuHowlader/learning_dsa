#include<iostream>
#include <unordered_map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int len; cin >> len;
        unordered_map<int, int>map;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
            map[arr[i]]++;
        }

        for (int i = 0; i < len; i++) {
            if (map[arr[i]] == 1) {
                cout << i + 1 << endl;
                break;
            }

        }

    }
    return 0;
}