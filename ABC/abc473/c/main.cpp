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

    unordered_map<ll, ll> count_people_in_class;
    ll a;
    rep(i, n) {
        cin >> a;
        count_people_in_class[a]++;
    }

    ll max_value = 0;
    for (auto &[k, v] : count_people_in_class) {
        max_value = max(max_value, v);
    }

    ll ans = 0;
    for (auto &[k, v] : count_people_in_class) {
        if (v == max_value || v == max_value - 1) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}