#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll d, f;
    cin >> d >> f;

    ll ans = f;

    while (d>=ans) {
        ans+=7;
    }

    cout << ans-d << endl;

    return 0;
}
