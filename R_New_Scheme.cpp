#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    int flag = 0;
    cin >> x;
    if (x % 25 != 0)
    {
        flag = 0;
    }
    for (int i = 0; i < 7; i++)
    {
        int y;
        cin >> y;

        if (((x >= 100 && y <= 675)) && x <= y && y % 25 == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }

        x = y;
    }

    flag ? cout << "Yes" : cout << "No";
}