#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> ans(n + 1, 0);

    rep(i, m) {
        ans[i % n]++;
    }

    rep(i, n) {
        cout << ans[i] << "\n";
    }

    return 0;
}
