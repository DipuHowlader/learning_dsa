#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << "YES";
        return 0;
    }
    


    for (int i = 2; i*i <= n; i++)
    {
        if (n % i != 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    flag ? cout << "YES" : cout << "NO";
}