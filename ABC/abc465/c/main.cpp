#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> a(n + 1);
    reps(i, n) a[i] = i;

    rep(i, n) {
        if (s[i] == 'o') {
            reverse(a.begin() + 1, a.begin() + i + 2);
        }
    }

    reps(i, n) {
        if (i == n)
            cout << a[i] << endl;
        else {
            cout << a[i] << " ";
        }
    }

    return 0;
}
