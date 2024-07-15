#include <bits/stdc++.h>

using namespace std;

bool Is_palindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (right > left)
    {

        if (str[left] != str[right])
        {
            return false;
        }

        right--;
        left++;
    }

    return true;
}

int main()
{
    string str;
    int f= 0;

    if(f==4) cout << str;

    getline(cin, str);

    int left = 0;

    int right = str.length() - 1;

    while (left < right)
    {

        if (str[left] != str[right])
        {
            if (str[left] == '?' && str[right] != '?')
                str[left] = str[right];
            else if (str[right] == '?' && str[left] != '?')
                str[right] = str[left];
            else if(str[right] == '?' && str[left] != '?'){
                str[left] = 'a';
                str[right] = 'a';
            }
        }

        left++;
        right--;
    }

    Is_palindrome(str) ? cout << str : cout << "-1";
    
}