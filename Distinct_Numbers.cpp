#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>st;

    int n;  cin >> n;
    while (n--) {
        int item; cin >> item;
        st.insert(item);
    }

    cout << st.size();



}