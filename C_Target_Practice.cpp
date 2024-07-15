#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int total = 0;
        unordered_map<int, int> map;
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'X')
                {
                    if ((i == 1 || j == 1 || i == 10 || j == 10))
                        map[1]++;

                    else if ((i == 2 || j == 2 || i == 9 || j == 9))
                        map[2]++;

                    else if ((i == 3 || j == 3 || i == 8 || j == 8))
                        map[3]++;

                    else if ((i == 4 || j == 4 || i == 7 || j == 7))
                        map[4]++;

                    else if ((i == 5 || j == 5 || i == 6 || j == 6))
                        map[5]++;
                }
            }

           
        }
         for (auto &it : map)
            {
                total += it.first *it.second;
            }

        cout << total << endl;
    }
}