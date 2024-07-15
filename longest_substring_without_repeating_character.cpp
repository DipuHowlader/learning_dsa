#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int start = 0;
        unordered_map<char, int>map;

        for (int i = 0; i < s.size(); i++) {
            char item = s[i];
            if(map.count(item) && map[item] >= start){
                start = map[item] + 1;
            }else{
                max_length = max(max_length, i-start+1);
            }

            map[item] = i;
        }

        return max_length; 


    }
};


int main() {
    solution sol;
    string s;
    cin >> s;
    int ans = sol.lengthOfLongestSubstring(s);
    cout << ans;
}