#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, q;
    cin >> n >> q;

    map<ll, ll> count, freq;
    freq[0] = n;

    ll base = 0;

    while (q--) {
        ll t;
        cin >> t;

        if (t == 1) {
            ll x;
            cin >> x;

            ll old = count[x];

            freq[old]--;
            freq[old + 1]++;

            count[x]++;

            if (freq[base] == 0) {
                base++;
            }
        } else {
            ll y;
            cin >> y;

            ll ans = 0;

            for (auto [k, v] : freq) {
                if (k >= y + base) {
                    ans += v;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}