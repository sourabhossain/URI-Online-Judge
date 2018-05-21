#include <stdio.h>

int main()
{
    double table[] = {4, 4.5, 5, 2, 1.50};
    int x, y;

    while(scanf("%d%d", &x, &y) != EOF) {
        printf("Total: R$ %0.2lf\n", table[x - 1] * y);
    }

    return 0;
}
