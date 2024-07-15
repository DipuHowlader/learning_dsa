#include <iostream>
#include<set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::set<int>st;

    for (int i = 0; i < n; i++)
    {
        int item; std::cin >> item;
        st.insert(item);
    }

    std::cout << st.size();

    return 0;
}