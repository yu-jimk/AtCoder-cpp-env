#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
#define YES(b) ((b) ? "YES" : "NO")

int main() {
    ll n ,m ,c;
    cin >> n >> m >> c;

    unordered_map<ll, ll> count;
    rep(i, n) {
        ll a;
        cin >> a;
        count[a]++;
    }

    ll ans = 0;
    rep(i, m){
        ll encount = 0;
        ll p = i+1;
        p%=m;
        while (c > encount){
            encount += count[p];
            p++;
            p%=m;
        }
        ans += encount;
    }

    cout << ans << endl;

    return 0;
}