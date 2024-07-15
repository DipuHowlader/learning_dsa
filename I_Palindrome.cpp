#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, orgin_num=0, reverse_num=0;
    cin >> n;
    orgin_num = n;

    while (n != 0)
    {
        reverse_num = n % 10 + reverse_num*10;
        n /= 10;
    }
    cout << reverse_num << "\n";

    orgin_num == reverse_num ? cout << "YES" : cout << "NO";
}