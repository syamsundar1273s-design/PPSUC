#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 1)
        printf("Yes");
    else if (n == 2 || n == 3 || n == 4)
        printf("No");
    else
        printf("Yes");

    return 0;
}

