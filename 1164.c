// 6, 28, 496, 8128, 33550336
#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    int i, ara[] = {6, 28, 496, 8128, 33550336};

    while(T--) {
       int n;

       scanf("%d", &n);

       for(i = 0; i < 5; i++) {
           if(ara[i] == n) {
              printf("%d eh perfeito\n", n);
              i = 0;
              break;
           }
       }

       if(i) {
          printf("%d nao eh perfeito\n", n);
       }
    }

    return 0;
}
