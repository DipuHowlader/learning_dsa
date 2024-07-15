#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    int res = static_cast<int>(ch) + 1;
    res >= 123 ? res = res - 26 : NULL;
    cout << static_cast<char>(res);
}