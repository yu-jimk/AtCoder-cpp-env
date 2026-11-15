#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll b, r;
    cin >> b >> r;

    ll ans = (30 - b) * (30 - r);

    cout << ans << endl;

    return 0;
}
