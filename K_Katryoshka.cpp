#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;

    for(int i = 1; i <= t; i++){
        ll eyes, mouth, body; cin >> eyes >>  mouth >> body;
        ll ans = 0;
        ans = min({eyes, mouth, body});
        eyes -= ans; 
        mouth -= ans; 
        body -= ans; 
        ans += min(eyes/2, body);
        cout << "Case "<< i<<": " << ans << endl;
    }   
}