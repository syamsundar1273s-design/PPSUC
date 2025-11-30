#include <stdio.h>

int main()
{
    double kmph, mps;
    scanf("%lf", &kmph);
    mps = kmph / 3.6;
    printf("%.2f", mps);
    return 0;
}

