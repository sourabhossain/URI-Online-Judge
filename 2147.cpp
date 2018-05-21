#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        string s;
        cin >> s;
        int t = s.size();
        printf("%d.%02d\n", t / 100, t % 100);
    }

    return 0;
}
