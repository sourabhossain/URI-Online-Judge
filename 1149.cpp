#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, sum = 0;

    scanf("%d%d", &a, &b);

    while(b <= 0) {
        scanf("%d", &b);
    }

    b += a;
    while(a < b) {
        sum += a;
        a++;
    }
    printf("%d\n", sum);

    return 0;
}
