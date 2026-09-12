#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, s, l;
    cin >> n >> s >> l;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> sum_R(n + 1, 0);
    for (ll i = s; i < n; i++) {
        sum_R[i + 1] = sum_R[i] + a[i - 1];
    }
    vector<ll> sum_L(n + 1, 0);
    for (ll i = s - 2; i >= 0; i--) {
        sum_L[i + 1] = sum_L[i + 2] + a[i];
    }

    ll ans = 0;
    for (ll left = 1; left <= s; left++) {
        for (ll right = s; right <= n; right++) {
            ll direc_L = sum_L[left] * 2 + sum_R[right];
            ll direc_R = sum_R[right] * 2 + sum_L[left];

            ll direc_min = min(direc_L, direc_R);

            if (direc_min <= l) {
                ans = max(ans, right - left + 1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
