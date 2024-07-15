#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }

        for (int m = 0; m < count; m++)
        {
            cout << "*";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        count++;

        cout << "\n";
    }
}