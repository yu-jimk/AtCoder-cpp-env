#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;

    ll ans = 0;
    for (ll i = a + 1; i <= b; i++) {
        if (i > l && i <= r) {
            ans += x;
        } else {
            ans += y;
        }
    }

    cout << ans << endl;

    return 0;
}
