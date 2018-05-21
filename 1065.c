#include <stdio.h>

int main()
{
    int i = 5, count = 0;

    while(i--) {
        int n;
        scanf("%d", &n);
        if(!(n & 1)) {
            count++;
        }
    }
    printf("%d valores pares\n", count);

    return 0;
}
