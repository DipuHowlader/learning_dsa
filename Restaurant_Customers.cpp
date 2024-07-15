#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> events;


    for (int i = 0; i < n; i++) {
        int start, end; cin >> start >> end;
        events.push_back({ start,1 });
        events.push_back({ end,-1 });
    }

    sort(events.begin(), events.end());
    int all_customers = 0;
    int max_cumtomers = 0;

    for (int i = 0; i < 2*n; i++) {
        all_customers += events[i].second;
        max_cumtomers = max(all_customers, max_cumtomers);
    }

    cout << max_cumtomers;

}