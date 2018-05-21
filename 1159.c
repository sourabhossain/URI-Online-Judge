#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n)) {
        if(n == 0) {
            break;
        }

        if(n & 1) {
            n++;
        }

        int i, sum = 0;

        for(i = 0; i < 5; i++) {
            sum += n;
            n += 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}
