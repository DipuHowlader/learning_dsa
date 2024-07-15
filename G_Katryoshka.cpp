#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    unsigned long long count = min({eyes, mouths, bodies});

    eyes -= count;
    bodies -= count;
    count += min(eyes/2 , bodies);
    cout << count;
}