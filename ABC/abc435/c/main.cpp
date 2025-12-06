#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i <= (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n+1);
    ll ans = 1;
    reps(i, ans) {
        cin >> a[i];
        ll range = i+a[i]-1;
        ans = max(ans, range);
        if (ans >= n) {
            ans = n;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
