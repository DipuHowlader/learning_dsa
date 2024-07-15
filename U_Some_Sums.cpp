#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, sum = 0;

    cin >> n >> a >> b;

    int temp_sum = 0;
    for (int i = 1; i <=n ; i++)
    {
        temp_sum += i;

        if (temp_sum >= a && temp_sum <=b)
        {
            sum += temp_sum;
        }
        
    }
    

    // sum = n* (n+1)/2;

    cout << sum;



}