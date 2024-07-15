#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int oddmin = 0, even_min = 0;
        for (int i = 0; i < n; i++)
        {
            int item;
            cin >> item;
            vec[i] = item;

            if (i > 0)
            {
                if (item & 1 && vec[i - 1] & 1)
                {
                    oddmin++;
                }
                else if (!(item & 1) && !(vec[i - 1] & 1))
                {
                    even_min++;
                }
            }
        }

        cout << oddmin + even_min << endl;
    }
}