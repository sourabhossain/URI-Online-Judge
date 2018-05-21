#include <stdio.h>

int main()
{
    char s[101];
    double a, b;

    scanf("%s%lf%lf", s, &a, &b);
    printf("TOTAL = R$ %0.2lf\n", a + (b * 0.15));

    return 0;
}
