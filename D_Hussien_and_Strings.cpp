#include <bits/stdc++.h>

#include <string>
#include <algorithm>

using namespace std;

string can_make_equal(string a, string b){

    int difference = 0;

    for (int i = 0; i <= a.size(); i++)
    {

        if (a[i] == b[i])
        {
            difference++;
        }
        
    }
    


    return difference == 2 ? "YES" :"NO";


}


int main(){
    string a, b;
    cin >> a >> b;

    string result = can_make_equal(a, b);
    cout << result;
}