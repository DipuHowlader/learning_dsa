#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string res = "";
    cin >> t;

    while (t--)
    {
        int n, count=0,finalAns=0;
        cin >> n;

        for (;n >= 1; n /= 2)
        {
            int rem = (n % 2);
            rem == 1 ? count++ : NULL;
            res +=  to_string(rem);
        }
        for (int i = 0; i < count; i++)
        {
            finalAns += (pow(2,i));
        }
        
        cout << finalAns << endl;
    }
    return 0;
}