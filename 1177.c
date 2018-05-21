#include <stdio.h>

int main()
{
    int i, n, T;

    scanf("%d", &n);

    for(i = 0, T = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, T++);
        if(T == n) {
            T = 0;
        }
    }

    return 0;
}
