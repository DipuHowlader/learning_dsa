#include <iostream>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    map<char, int>mp;
    string str;
    cin >> str;
    int min = 0;

    for (const char& ele : str) {
        mp[ele]++;
    }

    for (const auto& ele : mp) {
        min = max(ele.second, min);
    }

     for (const auto& ele : mp) {
        if(ele.second == min){
            cout << ele.first;
            return 0;
        }
    }

}