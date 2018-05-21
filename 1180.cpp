#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, s = 2147483647, p;
    scanf("%d", &T);

    for(int i = 0, n; i < T; i++) {
        scanf("%d", &n);

        if(s > n) {
            s = n;
            p = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", s, p);

    return 0;
}
