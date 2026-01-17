#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll p, q, x, y;
    cin >> p >> q >> x >> y;

    if ((p <= x && x <= p+99) && (q <= y && y <= q+99)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
