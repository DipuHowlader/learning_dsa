#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int even = 0, odd = 0, positive = 0, negative = 0;

    while (t--)
    {
        int num;
        cin >> num;
        if(num>0) positive ++;
        if(num<0) negative ++;
        if(num%2 == 0)  even++;
        if(num%2 != 0)  odd ++;
    }

    cout << "Even: "<< even << "\n";
    cout << "Odd: "<< odd << "\n";
    cout << "Positive: "<< positive << "\n";
    cout << "Negative: "<< negative << "\n";
}