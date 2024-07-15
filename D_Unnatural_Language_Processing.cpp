#include <iostream>
#include <string>
using namespace std;


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);


    int t; scanf("%d", &t);
    getchar();
    string str = "bcd";
    string vowels = "ae";
    while (t--) {

        // format cv and cvc

        long long len;
        scanf("%lld", &len);
        string words;
        cin >> words;
        cout <<
        for (int i = 1; i <= len; i++) {
            int counter = 0;
            if (str.find(words[i]) == string::npos && str.find(words[i - 1]) != string::npos) {
                counter = 1;
            }
            if (vowels.find(words[i]) == string::npos && vowels.find(words[i - 1]) != string::npos) {
                counter = 1;
            }

            if (!counter) printf(".");
            cout << words[i];

        }
        cout << "\n";


    }




    return 0;
}
