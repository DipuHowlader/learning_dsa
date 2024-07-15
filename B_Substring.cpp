#include <iostream>
#include <set>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string str; cin >> str;
    set<string>st;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            st.insert(str.substr(i, j-i+1));
        }

    }
    cout << st.size();

}