#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll x, y;
    cin >> x >> y;

    if (x % 16 == 0 && y % 9 == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
