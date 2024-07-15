#include <iostream>
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += num;
        }

        if(sum%2){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
}