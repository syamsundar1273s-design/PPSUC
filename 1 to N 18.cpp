#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i != N) // Add space after each number except the last
            printf(" ");
    }

    return 0;
}

