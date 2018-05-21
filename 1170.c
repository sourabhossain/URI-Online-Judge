#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        double n;

        scanf("%lf", &n);

        int day = 0;

        while(n > 1.0) {
            day++;
            n /= 2;
        }
        printf("%d dias\n", day);
    }

    return 0;
}
