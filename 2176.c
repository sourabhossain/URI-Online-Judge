/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>

int main()
{
    char str[150];
    scanf("%s", str);

    int i, count = 0;
    
    for(i=0; str[i]; i++) {
        if(str[i]=='1') {
            count++;
        }
    }

    if(count & 1) {
        str[i] = '1';
    } else {
        str[i] = '0';
    }

    str[i+1] = '\0';
    printf("%s\n", str);

    return 0;
}
