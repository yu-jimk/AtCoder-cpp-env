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

    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    bool ok = false;

    vector<ll> w(n);
    rep(i, n) {
        if (a[i] > b[i]) {
            ok = true;
            w[i] = 1e18;
        } else {
            w[i] = 1;
        }
    }

    if (!ok) {
        cout << "No\n";
        return 0;
    }

    cout << "Yes\n";

    for (ll x : w) {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}
