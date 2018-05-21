#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s = 1;

    for(int i = 2; i < 101; i++) {
        s += (1.0/i);
    }
    printf("%0.2lf\n", s);

    return 0;
}
