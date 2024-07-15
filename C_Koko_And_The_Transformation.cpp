#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>

using namespace std;

string can_transform(vector<int>& a, vector<int>& b) {
    if (accumulate(a.begin(), a.end(), 0) != accumulate(b.begin(), b.end(), 0)) {
        return "No";
    }

    unordered_map<int, int> a_counts, b_counts;

    for (int num : a) {
        a_counts[num]++;
    }

    for (int num : b) {
        b_counts[num]++;
    }

    for (auto& count : b_counts) {
        if (a_counts.find(count.first) == a_counts.end() || a_counts[count.first] < count.second) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    string result = can_transform(a, b);
    cout << result << endl;

    return 0;
}