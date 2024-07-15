#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;

    if (((n * (n + 1)) / 2)%2 == 0) {
        vector<int> vec1,vec2;
        printf("YES\n");

        


        cout << vec1.size() << endl;
        for (auto ele : vec1)
            cout << ele << " ";
        cout << endl;

        for (auto ele : vec2)
            cout << ele << " ";
        cout << endl;
        
    }
    else {
        printf("NO");
    }

}