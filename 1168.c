#include <stdio.h>

int main()
{
    int T, n[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &T);

    while(T--) {
        char s[1001];
        scanf("%s", s);

        int sum, i;
        for(i = sum = 0; s[i]; i++) {
            sum += n[s[i] - '0'];
        }
        printf("%d leds\n", sum);
    }

    return 0;
}
