// abc425 C - Rotate and Sum Query
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
#define ll long long

int main() {

    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }

    vector<ll> s(n + 2, 0);
    rep(i, n) s[i + 1] = s[i] + a[i];
    s[n + 1] = s[n] + a[0]; // 結局使ってないから消していいかも

    ll first_index = 0;
    rep(i, q) {
        ll a;
        cin >> a;
        if (a == 1) {
            ll c;
            cin >> c;
            first_index = (first_index + c) % n;
        } else {
            ll l, r;
            cin >> l >> r;
            ll L = (l - 1 + first_index) % n;
            ll R = (r - 1 + first_index) % n;

            ll ans;
            if (L <= R) {
                ans = s[R + 1] - s[L];
            } else {
                ans = (s[n] - s[L]) + s[R + 1];
            }
            cout << ans << endl;
        }
    }

    return 0;
}