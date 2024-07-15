#include <iostream>
#include <vector>
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
        vector<int> vec(n), vec_b, vec_c;
        for (int i = 0; i < n; i++)
            cin >> vec[i];


        for (int i = 0; i < n; i++)
        {
            int flag = 1;
            for (int j = 0; j < n; j++)
            {
                if (i != j && vec[i] % vec[j] == 0)
                {
                    flag = 0;
                    continue;
                }
            }
            if (flag)
                vec_b.push_back(vec[i]);
            else
                vec_c.push_back(vec[i]);
        }

        if (vec_b.size() != 0)
        {
            cout << vec_b.size() << " ";
            cout << vec_c.size() << endl;
            for (auto &ele : vec_b)
            {
                cout << ele << " ";
            }
            cout << endl;

            for (auto &ele : vec_c)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
}