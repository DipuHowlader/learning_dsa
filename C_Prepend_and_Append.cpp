#include <iostream>
#include <string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;

    while(t--){
        int len, ans= 0; cin>> len;
        string str; cin >> str;
        if(str[0] == str[len-1]){
            cout << len << "\n";
            continue;
        }
        for (int i = 0; i < str.length()/2; i++){
            if(str[i] != str[len-i-1]){
                ans+=2;
            }else{
                break;
            }
        }


        cout << len-ans << "\n";
    }

}