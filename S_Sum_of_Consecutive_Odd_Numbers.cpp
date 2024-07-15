#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, sum = 0, count_of_odd = 0;
        cin >> x >> y;

        x > y ? swap(x, y) : void();

        if (y - x == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        x % 2 == 0 ? x += 1 : x += 2;
        y % 2 == 0 ? y -= 1 : y -= 2;

        count_of_odd = (abs(y - x) / 2) + 1;
        sum = (count_of_odd * (x + y) / 2);
        cout << sum << "\n";
    }
}
