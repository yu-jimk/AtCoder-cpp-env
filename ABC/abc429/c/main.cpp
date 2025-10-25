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
    ll n;
    cin >> n;

    unordered_map<ll, ll> count;
    rep(i, n) {
        ll a;
        cin >> a;
        count[a]++;
    }

    ll ans = 0;
    for (auto [_, c] : count) {
        if (c >= 2){
            ll C = c*(c-1)/2;
            ans += C*(n - c);
        }
        
    }
    cout << ans << endl;

    return 0;
}
