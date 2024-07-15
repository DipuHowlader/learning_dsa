#include <bits/stdc++.h>

using namespace std;


int main(){
    int x;

    cin >> x;

    x%5 >=3 ?  cout << ((x / 5 )* 5) + 5 : cout << (x / 5 )* 5;

}