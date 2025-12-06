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

    vector<ll> a_sum(n+1, 0);
    rep(i, n) a_sum[i+1]=a_sum[i]+a[i];

    ll ans = 0;

    rep(i,n){
        for (ll j = i; j < n; j++){
            ll sum = a_sum[j+1]-a_sum[i];
            bool ok = true;
            for (ll k = i; k <= j; k++) {
                if (sum % a[k] == 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
