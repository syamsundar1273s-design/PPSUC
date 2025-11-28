#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Read three numbers
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is the largest
    largest = num1;

    if (num2 > largest)
        largest = num2;

    if (num3 > largest)
        largest = num3;

    // Print the largest number
    printf("%d", largest);

    return 0;
}

