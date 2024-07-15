#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;  cin >> n >> m >> k;
    vector<int> applicants(n), aparments(m);
    for (int i = 0; i < n;i++)
        cin >> applicants[i];

    for (int i = 0; i < m;i++)
        cin >> aparments[i];

    sort(applicants.begin(), applicants.end());
    sort(aparments.begin(), aparments.end());


    int i = 0, j = 0, count = 0;
    while (j < n && i < m) {
        int diff = (applicants[j] - aparments[i]);
        if (abs(diff) <= k) {
            count++;
            i++;
            j++;
        }
        else if (diff < 0) {
            j++;
        }
        else {
            i++;
        }
            
    }

    cout << count;
}