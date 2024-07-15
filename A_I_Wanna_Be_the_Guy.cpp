#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, k = 0, total = 0, sum = 0;
    set<int> set;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int num;
        cin >> num;
        set.insert(num);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        set.insert(num);
    }

    total = n * (n + 1) / 2;

    for (auto it = set.begin(); it != set.end(); it++)
        sum += *it;

    if (total == sum)
        cout
            << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}