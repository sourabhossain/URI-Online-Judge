#include <stdio.h>

int main()
{
    int x, y;
    
    while(scanf("%d%d", &x, &y) != EOF) {
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