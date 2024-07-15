#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int ele; cin>> ele;
        if(ele % k == 0){
            cout << ele /k << " ";
        }
    }

}