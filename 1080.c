#include <stdio.h>

int main()
{
    int i, n, value = 0, position;

    for(i = 0; i < 100; i++) {
        scanf("%d", &n);
        if(value < n) {
            value = n;
            position = i;
        }
    }
    printf("%d\n%d\n", value, position + 1);

    return 0;
}
