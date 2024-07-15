#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count_even = 0, count_odd = 0;
    for (int i = a; i <= b; i++)
    {
        i%2==0 ? count_even++ : count_odd++;
    }
    if (count_even == a && count_odd == b)
    {   
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}