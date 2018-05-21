#include <stdio.h>

int main()
{
    int a;
    unsigned long long b;

    while(scanf("%d%llu", &a, &b) && (a || b)) {
            printf("%llu\n", b * a);
    }

    return 0;
}
