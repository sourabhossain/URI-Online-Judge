#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    a++;
    while(a < b) {
        if(a % 5 == 2 || a % 5 == 3) {
            printf("%d\n", a);
        }
        a++;
    }

    return 0;
}
