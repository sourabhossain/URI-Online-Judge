#include <stdio.h>
#define PI 3.14159

int main()
{
    double r;

    scanf("%lf", &r);
    printf("VOLUME = %0.3lf\n", (4/3.0)*PI*r*r*r);

    return 0;
}
