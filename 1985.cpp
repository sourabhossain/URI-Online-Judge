#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    map <int, double> m;

    m[1001] = 1.50;
    m[1002] = 2.50;
    m[1003] = 3.50;
    m[1004] = 4.50;
    m[1005] = 5.50;

    scanf("%d", &T);

    int a, b;
    double total = 0;

    while(T--) {
        scanf("%d%d", &a, &b);
        total += (m[a] * b);
    }
    printf("%0.2lf\n", total);

    return 0;
}
