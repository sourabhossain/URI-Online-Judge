#include <stdio.h>

int main()
{
    int T = 6, count = 0;
    double sum = 0;

    while(T--) {
        double n;
        scanf("%lf", &n);

        if(n > 0) {
            count++;
            sum += n;
        }
    }
    printf("%d valores positivos\n%0.1lf\n", count, sum/count);

    return 0;
}
