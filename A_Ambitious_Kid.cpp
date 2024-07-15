#include <iostream>
using namespace std;

int abs(int x){
    if (x >= 0 ) return x;
    else return-1*x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int min;
    cin >> min;
    for (int i = 0; i < n-1; i++)
    {
        int item; cin >> item;
        if(item == 0){ min = 0; continue;}
        if (abs(item) < abs(min))
            min = item;
    }

    cout << abs(min);
}