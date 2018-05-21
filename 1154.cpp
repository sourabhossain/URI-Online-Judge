#include <bits/stdc++.h>

int main()
{
    double n, sum = 0;
    int i = 0;

    while(scanf("%lf", &n)) {
        if(n < 0) {
            break;
        }
        ++i;
        sum += n;
    }
    printf("%0.2lf\n", sum / i);

    return 0;
}
