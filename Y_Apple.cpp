#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y, num_of_apples;
    cin >> x >> y >> num_of_apples;

    if (x < (y/3)){
         cout << x * num_of_apples;
    }else{
        int pack_three = num_of_apples / 3;
        cout << y * pack_three + (num_of_apples % 3) * x;
    }
}