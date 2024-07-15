#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int maxValue = numeric_limits<int>::min();
    while (t--)
    {   
        int num;
        cin >> num;
        if( num >= maxValue){
            maxValue = num;
        }
    }
    cout << maxValue;
}