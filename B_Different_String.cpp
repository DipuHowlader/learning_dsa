#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char frist = s[0];
        int flag = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != frist) {
                flag = false;
            }
        }
        if (!flag) {
            cout << "YES" << endl;
            for (int i = 1; i < s.size(); i++) {
                cout << s[i];
            }
            cout << frist << endl;
        }else{
            cout << "NO" << endl;
        }


    }
    return 0;
}