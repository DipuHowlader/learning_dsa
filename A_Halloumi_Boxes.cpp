#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];


        if (is_sorted(arr, arr+n) || k >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}