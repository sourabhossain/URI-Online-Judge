#include <stdio.h>
#define PI 3.14159

int main()
{
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", 0.5 * a * c, PI * c * c, 0.5 * (a + b) * c, b * b, a * b);

    return 0;
}
