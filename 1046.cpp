#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n)) {
        if(n == 0) {
            break;
        }

        for(int i = 1; i <= n; i++) {
            printf("%d", i);
            if(i != n) {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
