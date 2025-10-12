// abc418 C - Flush
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (ll i = 0; i < q; i++) {
        ll b;
        cin >> b;
        ll ans = sum + 1;
        for (ll j = 0; j < n; j++) {
            ll tmp = a[j];
            if (b <= tmp)
                ans -= tmp - (b - 1);
        }

        if (ans > sum) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}