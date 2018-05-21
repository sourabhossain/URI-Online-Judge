#include <stdio.h>

int main()
{
    unsigned long long n;
    char s[20], i = 0;

    scanf("%llu", &n);

    while(n) {
        s[i++] = '0' + (n % 10);
        n /= 10;
    }

    s[i] = '\0';
    printf("%s\n", s);

    return 0;
}
