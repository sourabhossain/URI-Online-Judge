#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    int num = n * 100;

    int i, a[6] = {10000, 5000, 2000, 1000, 500, 200}, b[6] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for(i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %0.2lf\n", num / a[i], a[i] / 100.0);
        num %= a[i];
    }

    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %0.2lf\n", num / b[i], b[i] / 100.0);
        num %= b[i];
    }

    return 0;
}
