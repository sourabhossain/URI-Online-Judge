#include <stdio.h>

int main()
{
    int T;

    while(scanf("%d", &T) != EOF) {
        int n, t = -50;

        while(T--) {
            scanf("%d", &n);

            if(t < n) {
                t = n;
            }
        }

        if(t < 10) {
            printf("1\n");
        } else if(t >= 10 && t < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}
