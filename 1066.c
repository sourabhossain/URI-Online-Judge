#include <stdio.h>

int main()
{
    int i = 5, even = 0, odd = 0, positive = 0, negative = 0;

    while(i--) {
        int n;
        scanf("%d", &n);
        if(n & 1) {
            odd++;
        }
        else {
            even++;
        }

        if(n > 0) {
            positive++;
        }
        else if(n < 0) {
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);

    return 0;
}
