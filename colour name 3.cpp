#include <stdio.h>

int main() {
    char color;
    scanf(" %c", &color);  // Read a single character

    // Convert to uppercase if the input is lowercase
    if (color >= 'a' && color <= 'z') {
        color = color - 'a' + 'A';
    }

    switch(color) {
        case 'V':
            printf("Violet
");
            break;
        case 'I':
            printf("Indigo
");
            break;
        case 'B':
            printf("Blue
");
            break;
        case 'G':
            printf("Green
");
            break;
        case 'Y':
            printf("Yellow
");
            break;
        case 'O':
            printf("Orange
");
            break;
        case 'R':
            printf("Red
");
            break;
        default:
            printf("-1
");
    }

    return 0;
}

