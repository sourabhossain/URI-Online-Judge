#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%0.3lf\n", (b / 12.0) * a);

    return 0;
}
