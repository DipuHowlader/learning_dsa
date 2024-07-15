#include <iostream>
#include <string>
#include <ctype.h>

bool validateCode(int A, int B, std::string S)
{
    if (S.length() != (A + B + 1))
        return false;

    if (S[A] != '-')
        return false;

    for (int i = 0; i < S.length(); ++i){
        if (i == A)
            continue;
        if (!isdigit(S[i]))
            return false;
    }

    return true;
}

int main(){
    int m, n;
    std::string str;
    std::cin >> m >> n >> str;
    std::cout << ((validateCode(m, n, str)) ? "Yes" : "No");

    return 0;
}