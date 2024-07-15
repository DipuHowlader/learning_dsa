#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<long long> vec(n);
    std::unordered_map<int, int> freq;

    for (int i = 0; i < n; i++){
        std::cin >> vec[i];
        freq[vec[i]]++;
    }

    while (q--)
    {
        int a, b, count = 0;
        std::cin >> a >> b;
        for (int i = a - 1; i < b; i++) {
            count++;
            freq[vec[i]]--;
        }

        std::cout << count << "\n";

        for (int i = a - 1; i < b; i++) {
            freq[vec[i]]++;
        }
    }

    return 0;
}