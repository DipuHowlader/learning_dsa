#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        cout << min(x, y) << " " <<  max(x, y)<< endl;
    }
    return 0;
}