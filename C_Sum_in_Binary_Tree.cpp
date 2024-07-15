#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) {
        long long num_of_vertex;   cin >> num_of_vertex;
        long long total = num_of_vertex;

        long long node = num_of_vertex;
        while (node >= 1) {
            if (node % 2 == 0) {
                node = node / 2;
            } else
                node = (node - 1) / 2;
            total += node;
        }
        cout << total << "\n";
    }
}