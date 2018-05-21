#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 2; i <= 10000; i += T) {
        printf("%d\n", i);
    }

    return 0;
}
