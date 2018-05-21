#include <stdio.h>

void swap(double *a, double *b)
{
    double T = *a;
    *a = *b;
    *b = T;
}

int main()
{
    double a, b, c;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
        
        if(a < b) {
            swap(&a, &b);
        }
        
        if(a < c) {
            swap(&a, &c);
        }
        
        if(b < c) {
            swap(&b, &c);
        }
        
        if(a >= (b + c)) {
            printf("NAO FORMA TRIANGULO\n");
        }

        else if((a * a) == ((b * b) + (c * c))) {
            printf("TRIANGULO RETANGULO\n");
        }

        else if((a * a) > ((b * b) + (c * c))) {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        else if((a * a) < ((b * b) + (c * c))) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && a == c && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if(a == b || a == c || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
