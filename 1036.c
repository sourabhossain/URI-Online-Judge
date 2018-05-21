#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
        if(a == 0 || (b * b - 4 * a * c) < 0) {
            printf("Impossivel calcular\n");
        }
        else {
            printf("R1 = %0.5lf\nR2 = %0.5lf\n", (-b + sqrt(b * b - 4 * a * c)) / (2*a), (-b - sqrt(b * b - 4 * a * c)) / (2*a));
        }
    }

    return 0;
}
