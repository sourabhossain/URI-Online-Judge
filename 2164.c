#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("%0.1lf\n", (pow(((1 + sqrt(5)) / 2), n) - pow((1 - sqrt(5))/2, n)) / sqrt(5));

    return 0;
}
