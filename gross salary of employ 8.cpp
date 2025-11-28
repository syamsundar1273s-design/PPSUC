#include <stdio.h>

int main()
{
    double salary, hra, da, pf, gross;
    scanf("%lf %lf %lf", &salary, &hra, &da);
    pf = 0.12 * salary;
    gross = salary + hra + da + pf;
    printf("%.2f%.2f", pf, gross);
    return 0;
}

