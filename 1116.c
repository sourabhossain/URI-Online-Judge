#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        
        if(b == 0) {
            printf("divisao impossivel\n");
            continue;
        }
        printf("%0.1lf\n", a / (b * 1.0));
    }
    
    return 0;
}