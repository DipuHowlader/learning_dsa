#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> dx, dy;

    dx = {-1, 1, -1, 1};
    dy = {-1, 1, -1, 1};
    while (t--)
    {
        int ans = 0;
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        set<pair<int, int>> f_king, f_queen;

        for (int i = 0; i < 4; i++)
        {
            f_king.insert({xk+dx[i]*a,yk+dy[i]*b});
            f_king.insert({xk+dx[i]*b,yk+dy[i]*a});
            f_queen.insert({xq+dx[i]*a,yq+dy[i]*b});
            f_queen.insert({xk+dx[i]*b,yk+dy[i]*a});
        }
    }

    return 0;
}