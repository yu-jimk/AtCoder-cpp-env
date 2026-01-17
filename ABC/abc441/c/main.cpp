#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> pref(n + 1, 0);
    rep(i, n){
        pref[i+1] = pref[i] + a[i];
    }

    reps(i, n){
        ll j = i - (n - k);
        ll sum = 0;

        
        if (j > 0) {
            sum = pref[n - i + j] - pref[n - i];
        }

        if (sum >= x) {
            cout << i << endl;
            return 0;
        }

    }

    cout << -1 << endl;
    return 0;
}
