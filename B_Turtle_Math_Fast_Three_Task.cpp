#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int len; cin >> len;
        int arr[len], sum = 0;
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int mod = sum % 3;
        if (mod == 0) {
            cout << 0 << endl;
            continue;
        }

        int flag = 0;
        for (int i = 0; i < len; i++) {
            if (mod == (arr[i] % 3) || mod == 2) {
                cout << 1 << endl;
                flag = 1;
                break;
            }

        }
        if (flag) continue;

        else if (mod == 1) {
            cout << 2 << endl;
        }

    }
    return 0;
}