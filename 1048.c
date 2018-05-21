#include <stdio.h>

int main()
{
    double n;

    while(scanf("%lf", &n) != EOF) {
        if(n >= 0 && n <= 400) {
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n", n + (n * 0.15), n * 0.15);
        }
        else if(n > 400 && n <= 800) {
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n", n + (n * 0.12), n * 0.12);
        }
        else if(n > 800 && n <= 1200) {
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n", n + (n * 0.1), n * 0.1);
        }
        else if(n > 1200 && n <= 2000) {
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n", n + (n * 0.07), n * 0.07);
        }
        else if(n > 2000) {
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n", n + (n * 0.04), n * 0.04);
        }
    }

    return 0;
}
