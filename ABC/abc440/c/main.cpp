#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll t;
    cin >> t;

    rep(i, t){
        ll n, w; 
        cin >> n >> w;

        vector<ll> c(n+1);
        reps(j, n) {
            cin >> c[j];
        }

        ll ans = 1e18;
        ll x = 2*w-1;

        rep(j, 2*w){
            ll cost = 0;
            reps(k, n){
                ll cul  = (k+x)%(2*w);
                if (cul < w) cost += c[k];
            }
            x++;
            ans = min(ans, cost);
        }
        cout << ans << endl;
    }
    return 0;
}
