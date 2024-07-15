#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hours = 21;
    int minutes = 0;

    int k = 0;
    cin >> k;

    if (k >= 60)
    {
        hours += 1;
        k -= 60;
    }
    if (k < 60)
        minutes += k;

    cout << hours << ":";
    minutes < 10 ? cout << "0" : cout << "";
    cout << minutes;
}
