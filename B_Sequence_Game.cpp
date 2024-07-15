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
        int len_b;
        cin >> len_b;
        vector<int> vec(len_b);
        for (int i = 0; i < len_b; i++){
            cin >> vec[i];
        }

        cout << 2*len_b << "\n";
        for (int i = 0; i < len_b; i++)
            cout << vec[0] << " ";

        for (int i = 0; i < len_b; i++)
            cout << vec[i] << " ";
    }
}