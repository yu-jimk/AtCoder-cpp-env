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

    vector<string> a(n);
    ll max_length = 0;
    rep(i, n) {
        cin >> a[i];
        max_length = max(max_length, (ll)a[i].length());
    }

    rep(i, n) {
        reps(j, (max_length - a[i].length()) / 2) {
            cout << ".";
        }
        cout << a[i];
        reps(j, (max_length - a[i].length() + 1) / 2) {
            cout << ".";
        }
        cout << endl;
    }

    return 0;
}
