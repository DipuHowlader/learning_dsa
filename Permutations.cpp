#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 3 || n == 2)
        cout << "NO SOLUTION";
    else {
        if (n % 2==0) {
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";
            for (int i = 1; i <= n; i += 2)
                cout << i << " ";
        }
        else {
            for(int i = n-1; i;i-=2){
                cout << i << " ";
            }
            for(int i = n; i > 0;i-=2){
                cout << i << " ";
            }
        }

    }
}

/// 2 4 1 3