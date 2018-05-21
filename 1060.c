#include <stdio.h>

int main()
{
   int T = 6, count = 0;

   while(T--) {
        double n;
        scanf("%lf", &n);

        if(n > 0) {
            count++;
        }
   }
   printf("%d valores positivos\n", count);

    return 0;
}
