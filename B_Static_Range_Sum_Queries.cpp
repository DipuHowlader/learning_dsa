#include <iostream>
#include <vector>

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<long long> vec(n);

    for (int i = 0; i < n; i++)
    {
        int ele;
        std::cin >> ele;
        if (i > 0)
            vec[i] = ele + vec[i - 1];
        else
            vec[0] = ele;
    }

    while (q--)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << vec[b - 1] - (a ==1 ?0: vec[a - 2]) << "\n";
    }

    return 0;
}