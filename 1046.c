#include <stdio.h>

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF) {
        if(a < b) {
            a ^= b;
            b ^= a;
            a ^= b;
            b += 4;
        }

        printf("O JOGO DUROU %d HORA(S)\n", 24 - (a - b));
    }

    return 0;
}
