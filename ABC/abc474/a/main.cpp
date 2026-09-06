#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll x;
    cin >> x;
    reps(i, 3) {
        if (i != x) {
            cout << i << "\n";
            return 0;
        }
    }

    return 0;
}
