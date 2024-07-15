#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int left = 0, count = 0;
    for (int i = n-1; i >= left ;i--)
    {
        if((vec[i] + vec[left]) <= x){
            left++;
        }
        count++;
    }
    

    cout <<  count;
}
