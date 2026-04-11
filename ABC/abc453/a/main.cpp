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

    rep(i, n) {
        if (s[i] == 'o') {
            continue;
        } else {
            s = s.substr(i);
            cout << s << endl;
            return 0;
        }
    }

    cout << endl;

    return 0;
}
