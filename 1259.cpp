#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    vector <int> e;
    vector <int> o;

    while(T--) {
        int n;
        scanf("%d", &n);

        if(n & 1) {
            o.push_back(n);
        }
        else {
            e.push_back((n));
        }
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    T = e.size();
    
    for(int i = 0; i < T; i++) {
        printf("%d\n", e[i]);
    }

    for(int i = o.size() - 1; i >= 0; i--) {
        printf("%d\n", o[i]);
    }

    return 0;
}
