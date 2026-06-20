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

    vector<ll> h(n), l(n);
    rep(i, n) {
        cin >> h[i] >> l[i];
    }

    vector<ll> max_h(n, 0);
    max_h[n - 1] = h[n - 1];
    for (ll i = n - 2; i >= 0; i--) {
        max_h[i] = max(max_h[i + 1], h[i]);
    }

    ll q;
    cin >> q;

    rep(i, q) {
        ll t;
        cin >> t;

        ll index = upper_bound(l.begin(), l.end(), t) - l.begin();
        cout << max_h[index] << endl;
    }

    return 0;
}
