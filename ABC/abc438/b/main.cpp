#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    ll ans = 1e18;

    for (ll i = 0; i <= n - m; i++) {
        ll count = 0;
        for (ll j = 0; j < m; j++) {
            count += (s[i + j] - t[j] + 10) % 10;
        }
        ans = min(ans, count);
    }

    cout << ans << endl;

    return 0;
}
