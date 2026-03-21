#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = n; i > 0; i--)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    bool first = true;
    rep(i, n) {
        if (!first) {
            cout << ",";
        }
        cout << i;
        first = false;
    }
    cout << endl;

    return 0;
}
