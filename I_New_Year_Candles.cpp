#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a, b;
    cin >> a >> b;

    int ans = a;
    int reamining_candels = a;

    while (reamining_candels >= b)
    {
        int new_candels = reamining_candels / b;
        reamining_candels = new_candels + reamining_candels %b;
        ans +=new_candels;
    }
    
    cout << ans;
}