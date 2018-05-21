#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    map <int, int> m;
    int n;

    while(T--) {
        scanf("%d", &n);
        m[n]++;
    }

    for(map <int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << " aparece " << it->second << " vez(es)\n";
    }

    return 0;
}
