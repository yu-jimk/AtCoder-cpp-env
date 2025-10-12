// abc420 C - Sum of Min Query
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), b(n);
    ll min_total = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        min_total += min(a[i], b[i]);
    }

    for (int i = 0; i < q; ++i) {
        char c;
        ll x, v;
        cin >> c >> x >> v;

        min_total -= min(a[x - 1], b[x - 1]);

        if (c == 'A')
            a[x - 1] = v;
        else
            b[x - 1] = v;

        min_total += min(a[x - 1], b[x - 1]);

        cout << min_total << endl;
    }

    return 0;
}