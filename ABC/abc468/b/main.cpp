#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll m, d;
    cin >> m >> d;

    string s;
    cin >> s;

    vector<bool> watch(m, false);

    rep(i, s.size()) {
        if (s[i] == 'G') {
            ll l = max((ll)0, i - d);
            ll r = min(m - 1, i + d);

            for (ll j = l; j <= r; j++) {
                watch[j] = true;
            }
        }
    }

    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        if (!watch[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
