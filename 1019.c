#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int h = 0;

    if(n >= h) {
        h = n / 3600;
        n = n - (3600 * h);
    }
    printf("%d:%d:%d\n", h, n / 60, n % 60);

    return 0;
}
