#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        string str;
        cin >> str;
        int flag = 0;
        for (int i = 0; i < str.size();)
        {
            if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
            {
                ans = 2;
                i = i + 3;
                flag = 1;
            }
           else if(str[i] == '.' && !flag){
                i++;
                ans++;
            }
            else
            {
                i++;
            }
        }

        cout << ans << endl;
    }
}