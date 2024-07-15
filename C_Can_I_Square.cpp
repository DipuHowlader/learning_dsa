#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; scanf("%d", &t);
    getchar();
    while (t--) {
        long long total = 0; 
        int num_buckets; scanf("%d", &num_buckets);
        getchar();
        while (num_buckets--) {
            int a; scanf("%d", &a);
            getchar();
            total += a;
        }
        if(sqrt(total) == round(sqrt(total)))  printf("YES\n");
        else
         printf("NO\n");



    }
    return 0;
}
