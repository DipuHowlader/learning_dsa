#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
bool isPalindrome_(string s, int &start, int &end) {
        if (start >= end) {
            return true;
        }

        if (!isalnum(s[start])) {
            start++;
            return isPalindrome_(s, start, end);
        }

        if (!isalnum(s[end])) {
           end--;
           return isPalindrome_(s, start, end);
        }



        if (tolower(s[start]) == tolower(s[end])) {
            start++;
            end--;
            return isPalindrome_(s, start, end);
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;

        return isPalindrome_(s, start, end);
    }
};

int main() {
    Solution sol;
    cout << sol.isPalindrome("race a car");
}