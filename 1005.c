#include <stdio.h>

int main()
{
    double a, b;

    scanf("%lf%lf", &a, &b);
    printf("MEDIA = %0.5f\n", ((a*3.5) + (b*7.5)) / (3.5 + 7.5));

    return 0;
}
