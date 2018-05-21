#include <stdio.h>

int main()
{
    int a, b;
    double d;

    scanf("%d%d%lf", &a, &b, &d);
    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", a, b * d);

    return 0;
}
