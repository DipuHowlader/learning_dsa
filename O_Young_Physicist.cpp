#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    
    int cor_x = 0;
    int cor_y = 0;
    int cor_z = 0;

    for (int i = 0; i < t; i++) {
        for (int i = 0; i < 3; i++) {
            if (i == 0) {
                int x; cin >> x;
                cor_x += x;
            } else if (i == 1) {
                int y; cin >> y;
                cor_y += y;
            } else {
                int z;
                cin >> z;
                cor_z += z;

            }
        }



    }
    (cor_x == 0 && cor_y == 0 && cor_z == 0) ? printf("YES") : printf("NO");



}