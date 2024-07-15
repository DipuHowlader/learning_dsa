#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        for (int i = 1; i < vec.size() - 1; i++)
        {
            for (int j = 1; j < vec.size() - i; j++)
            {
                if (vec[j] > vec[j + 1])
                {
                    int temp = vec[j];
                    vec[j] = vec[j + 1];
                    vec[j + 1] = temp;
                }
            }
        }

        if (is_sorted(vec.begin(), vec.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}