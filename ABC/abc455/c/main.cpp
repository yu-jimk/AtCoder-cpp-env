#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;

    unordered_map<ll, ll> mp;
    rep(i, n) {
        ll num;
        cin >> num;
        mp[num]++;
    }

    vector<ll> sums;
    for (auto [x, cnt] : mp) {
        sums.push_back(x * cnt);
    }

    sort(sums.rbegin(), sums.rend());

    ll ans = 0;
    for (ll i = k; i < sums.size(); i++) {
        ans += sums[i];
    }

    cout << ans << endl;

    return 0;
}
