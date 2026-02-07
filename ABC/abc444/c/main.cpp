#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

bool isL(ll L, vector<ll> a) {
    return true;
}

int main() {
    ll n;
    cin >> n;

    ll sum = 0;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.rbegin(), a.rend());

    vector<ll> ans;

    for (ll i = n; i >= 2; i--) {
        if (sum % i == 0) {
            ll L = sum / i;
            if (L >= a[0] && isL(L, a)) {
                ans.push_back(L);
            }
        }
    }

    rep(i, ans.size()) {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
