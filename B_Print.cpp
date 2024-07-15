#include <bits/stdc++.h>

using namespace std;

int Print_to_N(int n)
{
    for (int i = 1; i <= n; i++)
    {
        i==n? cout << i : cout << i <<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    Print_to_N(n);
}