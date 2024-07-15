#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;

    vector<pair<int, int>>movies(n);

    for (int i = 0; i < n; i++) 
       cin >> movies[i].first >> movies[i].second;
    
    sort(movies.begin(), movies.end(), cmp);

    for (auto it : movies)
    {
        cout << it.first << " " << it.second << endl;
    }
    

    int last_finishing_time = -1;
    int max_movies = 0;

    for (int i = 0; i < n; i++) {
        if (last_finishing_time <= movies[i].first) {
            max_movies++;
            last_finishing_time = movies[i].second;
        }
    }
    cout << max_movies;

}