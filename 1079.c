#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        double a, b, c;
        scanf("%lf%lf%lf", &a, &b, &c);
        printf("%0.1lf\n", ((a*2) + (b*3) + (c*5)) / (2+3+5));
    }

    return 0;
}
