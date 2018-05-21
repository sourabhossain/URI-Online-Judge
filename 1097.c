#include <stdio.h>

int main()
{
    int i, j, T = 7;

    for(i = 1; i < 10; i += 2) {
        for(j = 0; j < 3; j++) {
            printf("I=%d J=%d\n", i, T--);
        }
        T += 5;
    }

    return 0;
}
