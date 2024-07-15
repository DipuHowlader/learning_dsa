#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    scanf("%d", &n);

    if (n < 10) printf("000");
    else if (n < 100) printf("00");
    else if (n < 1000)printf("0");



    printf("%d", n);



}