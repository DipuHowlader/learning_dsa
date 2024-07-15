#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int num;
        long long fact = 1;
        cin >> num;

        for (int i = 2; i <= num; i++)
        {
            fact *= i;
        }

        cout << fact << "\n";
    }
}