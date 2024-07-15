#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> values;

    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        values.insert(x);
    }
    cout << values.size();
}