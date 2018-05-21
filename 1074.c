#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        if(n > 0) {
           if(n & 1) {
                printf("ODD POSITIVE\n");
           }
           else {
                printf("EVEN POSITIVE\n");
           }
        }
        else if(n < 0) {
            if(n & 1) {
                printf("ODD NEGATIVE\n");
            }
            else {
                printf("EVEN NEGATIVE\n");
            }
        }
        else {
            printf("NULL\n");
        }
    }

    return 0;
}
