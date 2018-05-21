#include <stdio.h>

int main()
{
    int x, y, sum = 0;

    scanf("%d%d", &x, &y);

    if(x > y) {
        x ^= y;
        y ^= x;
        x ^= y;
    }

    while(x <= y) {
        if(x % 13) {
            sum += x;
        }
        x++;
    }
    printf("%d\n", sum);

    return 0;
}
