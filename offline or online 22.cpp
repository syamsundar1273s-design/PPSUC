#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    float online_price = 0.9 * N;

    if (online_price < M)
        printf("ONLINE");
    else if (online_price > M)
        printf("DINING");
    else
        printf("EITHER");

    return 0;
}

