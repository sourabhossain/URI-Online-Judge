#include <stdio.h>

int main()
{
    int m, n;

    while(scanf("%d%d", &m, &n)) {
        if(m == 0 || n == 0 || n < 0 || m < 0) {
            break;
        }
        if(m > n) {
            m ^= n;
            n ^= m;
            m ^= n;
        }

        int sum = 0;
        while(m <= n) {
            sum += m;
            printf("%d ", m);
            m++;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}
