#include <bits/stdc++.h>

int main()
{
    double d[100];

    for(int i = 0; i < 100; i++) {
        scanf("%lf", &d[i]);
    }

    for(int i = 0; i < 100; i++) {
        if(d[i] <= 10) {
            printf("A[%d] = %0.1lf\n", i, d[i]);
        }
    }

    return 0;
}
