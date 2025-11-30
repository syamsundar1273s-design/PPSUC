#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (y * 100 >= 75 * x)
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");

    return 0;
}

