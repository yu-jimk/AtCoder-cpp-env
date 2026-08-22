#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    vector<ll> l(n), s(n + 1);
    rep(i, n) cin >> l[i];
    rep(i, n) s[i + 1] = s[i] + l[i];

    ll ans = 1e18;
    rep(i, s.size()) {
        ans = min(ans, abs(s[i] - (s[n] - s[i])));
    }

    cout << ans << endl;

    return 0;
}
