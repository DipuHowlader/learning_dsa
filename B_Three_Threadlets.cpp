#include<iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        long long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);

        if (arr[1] % arr[0] != 0 || arr[2] % arr[0] != 0) {
            cout << "NO \n";
            continue;
        }

        if (arr[1]/arr[0] -1 + arr[2]/arr[0] -1 <=3)
        {
            cout << "YES \n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}