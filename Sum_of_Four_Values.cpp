#include <iostream> 
#include <vector>
#include <algorithm>
#include <map>

typedef long long ll;
using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector <pair<ll, int>>vec;
    for (int i = 0; i <= n; i++) {
        cin >> vec[i].first;
        vec[i].second = i + 1;
    }

    map<int, vector<int>>seen;

    // sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        int target = x - target;

        if (seen.count(target)) {}


        seen[vec[i]].push_back(i);
    }



}