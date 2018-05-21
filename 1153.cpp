#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long T = 1;
    while(n) {
        T *= n--;
    }

    cout << T << endl;

    return 0;
}
