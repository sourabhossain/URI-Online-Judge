#include <bits/stdc++.h>

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b)) {
        if(a == 0 || b == 0) {
            break;
        }

        if(a > 0 && b > 0) {
            printf("primeiro\n");
        }
        else if(a > 0 && b < 0) {
            printf("quarto\n");
        }
        else if(a < 0 && b < 0) {
            printf("terceiro\n");
        }
        else {
            printf("segundo\n");
        }
    }

    return 0;
}
