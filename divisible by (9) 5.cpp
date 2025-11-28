#include <stdio.h>

int main() {
    int num;
    
    // Read the input number
    scanf("%d", &num);
    
    // Check divisibility by 9
    if (num % 9 == 0)
        printf("True");
    else
        printf("False");
    
    return 0;
}

