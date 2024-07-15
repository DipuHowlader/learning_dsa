#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int no_of_one, no_of_two, no_of_three;
        cin >> no_of_one >> no_of_two >> no_of_three;

        // for no of one
        if ((no_of_two +no_of_three) %2) cout << 0;
        else cout << 1;
        cout << " ";

        // for no of two
        if ((no_of_one +no_of_three) %2) cout << 0;
        else cout << 1;
        cout << " ";

        // for no of three
        if ((no_of_two +no_of_one) %2) cout << 0;
        else cout << 1;
        cout << " \n";


        
    }

    return 0;
}