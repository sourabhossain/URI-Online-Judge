#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int x, y;
        
        scanf("%d%d", &x, &y);
        
        if(x > y) {
            x ^= y;
            y ^= x;
            x ^= y;
        }
        
        if(x & 1) {
            x++;
        }
        
        int sum = 0;
        while(x < y) {
            if(x & 1) {
                sum += x;
            }
            x++;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}