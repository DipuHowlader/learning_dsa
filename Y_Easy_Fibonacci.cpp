#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, a = 0, b = 1,c;
    cin >> n;

    if (n == 0){
        // cout << a << " ";
        return 0;
    } 
    if (n == 1) {
        cout << a;
        return 0;
    }
    
    cout << a << " " << b << " ";
    for (int i = 0; i < n-2; i++)
    {   
        c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
    
    
}