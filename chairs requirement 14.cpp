#include <stdio.h>

int main()
 {
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X > Y)
        printf("%d", X - Y);
    else
        printf("0");
    return 1;
}

