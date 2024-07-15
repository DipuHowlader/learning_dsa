#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    if (t < 2)
    {
        cout << -1 << "\n";
        return 0;
    }
    else
    {
        for (int i = 2; i <= t; i += 2)
        {
            cout << i << "\n";
        }
    }
}