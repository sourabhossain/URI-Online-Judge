#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int a, b;

        scanf("%d%d", &a, &b);

        while(b) {
            int T = b;
            b = a % b;
            a = T;
        }
        printf("%d\n", a);
    }

    return 0;
}
