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

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    for (ll i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
            ans++;
    }

    cout << ans << endl;

    return 0;
}
