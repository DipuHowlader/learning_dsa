#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;

        for (int i = 0; i < n - 1; i++)
        {
            int eff;
            cin >> eff;
            sum += eff;
        }

        cout << -1*sum << endl;
    }
}