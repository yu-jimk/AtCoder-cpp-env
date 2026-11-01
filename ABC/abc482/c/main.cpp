#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll h, w, n, q;
    cin >> h >> w >> n >> q;

    vector<ll> r(n), c(n);
    rep(i, n) {
        cin >> r[i] >> c[i];
    }

    sort(r.begin(), r.end());
    sort(c.begin(), c.end());

    while (q--) {
        ll num, b, e;
        cin >> num >> b >> e;

        if (num == 1) {
            auto right = upper_bound(r.begin(), r.end(), e);
            auto left = lower_bound(r.begin(), r.end(), b);
            cout << right - left << endl;
        } else {
            auto right = upper_bound(c.begin(), c.end(), e);
            auto left = lower_bound(c.begin(), c.end(), b);
            cout << right - left << endl;
        }
    }

    return 0;
}
