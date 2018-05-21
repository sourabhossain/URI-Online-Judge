#include <bits/stdc++.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n, ck = 1;
        scanf("%d", &n);

        if(n < 2) {
           ck = 0;
        }
        
        else if(n == 2);
        
        else if(n % 2 == 0) {
            ck = 0;
        }
        else {
            int root = sqrt(n);
            for(int i = 3; i <= root; i += 2) {
                if(n % i == 0) {
                    ck = 0;
                }
            }
        }

        if(ck) {
            printf("Prime\n");
        }
        else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
