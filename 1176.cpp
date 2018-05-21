#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        unsigned long long a = 0, b = 1, s;
        int n;

        scanf("%d", &n);

        if(n == 0) {
            s = a;
        }
        else if(n == 1) {
            s = b;
        }
        else {
            for(int i = 2; i <= n; i++) {
                    s = a + b;
                    a = b;
                    b = s;
            }
        }
        printf("Fib(%d) = %llu\n", n, s);
    }

    return 0;
}

