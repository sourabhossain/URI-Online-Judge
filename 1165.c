#include <stdio.h>
#include <math.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        if(n < 2) {
            printf("%d nao eh primo\n", n);
        }
        else if(n == 2) {
            printf("%d eh primo\n", n);
        }
        else if(!(n & 1)) {
            printf("%d nao eh primo\n", n);
        }
        else {
            int i, l = sqrt(n);
            for(i = 3; i <= l; i += 2) {
                if(!(n % i)) {
                    printf("%d nao eh primo\n", n);
                    break;
                }
            }

            if(i > l) {
                printf("%d eh primo\n", n);
            }
        }
    }

    return 0;
}
