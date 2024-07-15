#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int max_interval = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                if (arr[i] - arr[i - 1] > max_interval)
                    max_interval = arr[i] - arr[i - 1];
            }
            else
                max_interval = arr[0];
        }
        int count = max(2 * (x - arr[n - 1]), max_interval);
        cout << count << endl;
    }
}