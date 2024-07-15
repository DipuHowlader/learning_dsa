// #include <iostream>
// #include <string>
// using namespace std;

// int minMovesToEqualStrings(string s, string t) {
//     int i = 0, j = 0;
//     int len_s = s.length(), len_t = t.length();
    
//     while (i < len_s && j < len_t && s[len_s - i - 1] == t[len_t - j - 1]) {
//         i++;
//         j++;
//     }
    
//     return len_s + len_t - 2 * i;
// }

// int main() {
//     string s, t;
//     getline(cin, s);
//     getline(cin, t);

//     cout << minMovesToEqualStrings(s, t) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{


 
    string st1, st2;
    int move = 0;
 
    getline(cin, st1);
    getline(cin, st2);
 
    int len_s1 = st1.length(), len_s2 = st2.length();
 
    int i = 0, j = 0;
 
    if (st1[len_s1 - 1] == st2[len_s2 - 1])
    {
        while (i < len_s1 && j < len_s2 && st1[len_s1 - i - 1] == st2[len_s2 - 1 - j])
        {
            move += 1;
            i++;
            j++;
        }
    }else{
        cout << len_s1 +len_s2;
        return 0;
    }
 
    cout << len_s1 + len_s2 - (move*2);
}