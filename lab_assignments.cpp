#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hours = 22;
    int minutes = 0;

    int k = 0;
    cin >> k;

    if (k >= 60)
        hours += 1;
    if (k < 60)
        minutes += k;
}
