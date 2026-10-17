#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, k, t;
    cin >> n >> k >> t;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    ll now = 0;
    rep(i, n) {
        if (a[i] > now) {
            ll diff = a[i] - now;
            ans += diff / k;
            if (diff % k > 0) {
                ans++;
            }
        }
        now = a[i] + k;
        if (now >= t) {
            break;
        }
    }

    if (now < t) {
        ll diff = t - now;
        ans += diff / k;
        if (diff % k > 0) {
            ans++;
        }
        now = t;
    }

    cout << ans << endl;

    return 0;
}
