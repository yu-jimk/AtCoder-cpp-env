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

    unordered_map<ll, ll> count;
    ll a;
    rep(i, n) {
        cin >> a;
        count[a]++;
    }

    ll ans = 0;
    for (auto &[k, v] : count) {
        ans += k * (v % 2);
    }

    cout << ans << endl;

    return 0;
}
