#include <stdio.h>

int main()
{
    int x, i = 6;

    scanf("%d", &x);

    if(!(x & 1)) {
        x++;
    }

    while(i--) {
        printf("%d\n", x);
        x += 2;
    }

    return 0;
}
