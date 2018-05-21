#include <stdio.h>

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF) {
        if(a > b) {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        if(b % a) {
            printf("Nao sao Multiplos\n");
        }
        else {
            printf("Sao Multiplos\n");
        }
    }

    return 0;
}
