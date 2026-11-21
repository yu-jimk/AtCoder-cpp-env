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

    vector<ll> c(n);
    rep(i, n) cin >> c[i];

    vector<ll> min_len(n, 1e18);

    ll cnt = 0;
    rep(i, n) {
        if (i > 0 && c[i] == c[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (i - cnt >= 0) {
            min_len[i] = min(min_len[i], cnt);
        }
    }

    cnt = 0;
    for (ll i = n - 1; i >= 0; i--) {
        if (i + 1 < n && c[i] == c[i + 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (i + cnt < n) {
            min_len[i] = min(min_len[i], cnt);
        }
    }

    rep(i, n) {
        cout << min_len[i] << " ";
    }
    cout << endl;

    return 0;
}
