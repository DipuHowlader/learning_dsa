#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unordered_map<int, int> countMap;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int item;
            cin >> item;
            countMap[item]++;
        }

        if (countMap.size() < 2)
            cout << "Yes\n";
        else if (countMap.size() == 2)
        {
            auto it = countMap.begin();
            auto itl = it++;
            if (it != countMap.end() && n / 2 == it->second || n / 2 == itl->second)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }
}