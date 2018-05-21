#include <stdio.h>

int main()
{
    int ara[10];
    int i, n;

    for(i = 0; i < 10; i++) {
        scanf("%d", &n);

        if(n <= 0) {
            ara[i] = 1;
            continue;
        }
        ara[i] = n;
    }

    for(i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, ara[i]);
    }

    return 0;
}
