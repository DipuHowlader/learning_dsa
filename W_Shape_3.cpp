#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= (t - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i + (i - 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // lower half
    for (int i = 0; i < t; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <=5; j+=2)
        {
            cout << "*";
            cout << "*";
        }

        cout << "\n";
    }
}