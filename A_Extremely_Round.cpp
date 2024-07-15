#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;

void pre_calculate()
{
    for (int i = 1; i <= 999999; i*=10)
    {
        for (int j = 1; j <= 9; j++)
        {
            vec.push_back(i * j);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    pre_calculate();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;

        for (auto x : vec)
        {
            if (x <= n)
                ans++;
            else
                break;
        }

        cout << ans << endl;
    }
}