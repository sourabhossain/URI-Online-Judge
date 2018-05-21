#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s = 1;

    for(int i = 3, j = 2; i <= 39; i += 2) {
        s += (i / (j * 1.0));
        j *= 2;
    }
    printf("%0.2lf\n", s);

    return 0;
}
