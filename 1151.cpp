#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int a = 0, b = 1;

    cin >> T;

    for(int i = 1; i <= T; i++) {
        if(i == 1) {
            cout << a;
        }
        else if(i == 2) {
            cout << b;
        }
        else {
            int T = a + b;
            cout << T;
            a = b;
            b = T;
        }

        if(i != T) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
