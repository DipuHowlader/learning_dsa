#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, minValue, maxValue;
    cin >> a;
    minValue = min(a / 10, a % 10);
    maxValue = max(a / 10, a % 10);

    if (minValue == 0 || maxValue%minValue == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
