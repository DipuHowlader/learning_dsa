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
        int len, interval = 1e9;
        bool sorted = true;
        cin >> len;
        vector<int> vec(len);
        for (int i = 0; i < len; i++)
        {
            cin >> vec[i];
            if (i > 0)
            {
                interval = min(vec[i] - vec[i - 1], interval);
                if (vec[i] < vec[i-1]) sorted = false;
            }
        }

        if(!sorted){
            cout << 0 << endl;
        }else{
            cout << interval/2+1 << endl;
        }
    }
}