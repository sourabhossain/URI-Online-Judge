#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    int n = 1;
    while(T--) {
        int i;
        for(i = 0; i < 3; i++) {
            printf("%d ", n++);
        }
        n++;
        printf("PUM\n");
    } 

    return 0;
}