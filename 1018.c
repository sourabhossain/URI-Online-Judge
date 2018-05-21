#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int i = 0, count[7] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", n);
    for(i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", n / count[i], count[i]);
        n %= count[i];
    }

    return 0;
}
