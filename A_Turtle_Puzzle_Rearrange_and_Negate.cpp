#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int len; cin >> len;
        int arr[len];
        int sum = 0;
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
            if (arr[i] < 0) {
               sum += (-arr[i]);
            }else
            sum += arr[i];

        }

        cout << sum << endl;

    }
    return 0;
}