#include<iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int flag = 0;
        string str_1;
        string str_2;
        for (int i = 1; i <= n; i++) {
            if (i % 2) {
                str_1 += "##";
                str_2 += "..";
            } else {
                str_1 += "..";
                str_2 += "##";
            }
        }
        for (int i = 1; i <= n; i++) {

            if (i % 2) {
                cout << str_1 << endl;
                cout << str_1 << endl;
            } else {
                cout << str_2 << endl;
                cout << str_2 << endl;
            }

        }


    }
    return 0;
}