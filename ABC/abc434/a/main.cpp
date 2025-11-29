#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll w, b;
    cin >> w >> b;

    ll ans = w*1000/b + 1;

    cout << ans << endl;

    return 0;
}
