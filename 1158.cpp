#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--) {
        int x, y;
        cin >> x >> y;

        if(!(x & 1)) {
            x++;
        }

        int sum = 0;
        while(y--) {
            sum += x;
            x += 2;
        }
        cout << sum << endl;
    }

    return 0;
}
