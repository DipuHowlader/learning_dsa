#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;
    
    if (x > y  && x-y <=3)
    {
        cout <<"Yes";
    }else if (y>x && y-x<= 2){
        cout <<"Yes";
    }else{
        cout <<"No";
    }
     


}