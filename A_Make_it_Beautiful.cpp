#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

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
        vector<int> vec(n), ansVec(n);
        for (int i = 0; i < n; i++)
        {
            int item;
            cin >> item;
            vec[i] = item;

            if (i > 1)
            {
                if (vec[i - 1] + vec[i - 2] == item)
                {
                    ansVec[i - 2] = item;
                    ansVec[i - 1] = vec[i - 1];
                    ansVec[i] = vec[i - 2];
                }
            }
        }

        for (auto x : ansVec)
        {
            cout << x << " ";
        }

        cout << endl;
    }
}