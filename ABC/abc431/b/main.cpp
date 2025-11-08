#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll x , n;
    cin >> x >> n;

    vector<ll> w(n);
    rep(i, n) cin >> w[i];

    unordered_map<ll, bool> is_used;

    ll q;
    cin >> q;

    ll ans = x;
    rep(i, q) {
        ll p;
        cin >> p;
        if (is_used[p - 1]){
            ans -= w[p - 1];
            is_used[p - 1] = false;
        }else{
            ans += w[p - 1];
            is_used[p - 1] = true;
        }
        cout << ans << endl;
    }

    return 0;
}
