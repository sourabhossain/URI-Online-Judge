#include <stdio.h>

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void sort(int a, int b, int c)
{
    if(a > b) {
       swap(&a, &b);
    }

    if(a > c) {
        swap(&a, &c);
    }

    if(b > c) {
        swap(&b, &c);
    }
    printf("%d\n%d\n%d\n", a, b, c);
}

int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c) != EOF) {
          sort(a, b, c);
          printf("\n%d\n%d\n%d\n", a, b, c);
    }

    return 0;
}
