#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        if(c) {
           printf("%02d:%02d - A porta abriu!\n", a, b);
        } else {
            printf("%02d:%02d - A porta fechou!\n", a, b);
        }
    }

    return 0;
}
