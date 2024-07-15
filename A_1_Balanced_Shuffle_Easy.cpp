#include<iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    vector<pair<int, int>>index;
    map<pair<int, int>, char>whole;
    int opening = 0, closing = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i-1] == '(') opening++;
        else if (str[i-1] == ')') closing++;

        int position = opening - closing;
        whole[{i + 1, position}] = str[i];
        index.push_back({ position,i + 1 });

    }

    sort(index.begin(), index.end(), compareSecond);


    for (auto ele : index) {
        // cout << ele.second << " " << ele.first << endl;
        cout << whole[{ele.second, ele.first}];
    }



}