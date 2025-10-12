// abc425 A - Sigma Cubes
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;
#define ll long long

int main() {

    int n;
    cin >> n;

    ll ans = 0;
    rep(i, n) {
        ans += pow(-1, i) * pow(i, 3);
    }

    cout << ans << endl;
    return 0;
}