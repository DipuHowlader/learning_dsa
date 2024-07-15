#include <bits/stdc++.h>
using namespace std;

vector<string> genrate_gray_code(int n) {
    if (n == 1) {
        return { "0", "1" };
    }

    vector<string> prev_code = genrate_gray_code(n - 1);
    vector<string> result;

    for (const string& code : prev_code) {
        result.push_back("0" + code);
    }

    for(int i =  prev_code.size()-1; i >= 0; i--){
        result.push_back("1" + prev_code[i]);
    }
    
    return result;

}

int main() {
    int n; cin >> n;

    vector<string> gray_code = genrate_gray_code(n);
    for (const string& code : gray_code) {
        cout << code << endl;
    }
}