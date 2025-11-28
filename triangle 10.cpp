#include <stdio.h>

int main() {
    int a, b, c;

    // Read the sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // First, check if the triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        // Check for Equilateral triangle
        if (a == b && b == c)
            printf("Equilateral triangle");
        // Check for Isosceles triangle
        else if (a == b || a == c || b == c)
            printf("Isosceles triangle");
        // If not equilateral or isosceles, it is Scalene
        else
            printf("Scalene triangle");
    } else {
        printf("Invalid triangle");
    }

    return 0;
}

