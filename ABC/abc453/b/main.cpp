#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll t, x;
    cin >> t >> x;

    vector<ll> a(t + 1);
    rep(i, t + 1) cin >> a[i];

    ll last_save = a[0];
    cout << 0 << " " << a[0] << endl;

    reps(i, t) {
        if (abs(last_save - a[i]) >= x) {
            last_save = a[i];
            cout << i << " " << a[i] << endl;
        }
    }

    return 0;
}
