#include <iostream>
#include <vector>

using namespace std;

bool are_equal(vector<int>& vec1, vector<int>& vec2, vector<int>& vec3) {
    for (int i = 0; i < vec2.size(); i++)
        if (vec1[i] != vec2[i]) return false;

    for (int i = 0; i < vec3.size(); i++)
        if (vec1[vec2.size() + i] != vec3[i]) return false;
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n;cin >> n;
        int eversion = 0;
        vector<int> vec(n), vec_left, vec_right;
        for (int i = 0; i < n; i++)  cin >> vec[i];

        int x = vec.back();

        while (!are_equal(vec, vec_left, vec_right)){
            vec_left.clear();
            vec_right.clear();

            for (int i = 0; i < n; i++)
                if (vec[i] <= x) vec_left.push_back(vec[i]);
                else vec_right.push_back(vec[i]);
                

            if (!vec_right.empty()) 
                x = vec_right.back();

            eversion++;
        }
        cout << eversion << "\n";
    }

}