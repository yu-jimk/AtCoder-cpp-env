#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

ll getC(string s) {
    string c = "22233344455566677778889999";
    return c[s[0] - 'a'] - '0';
}

int main() {
    ll n;
    cin >> n;

    vector<string> s(n);
    rep(i, n) cin >> s[i];

    rep(i, n) {
        ll c = getC(s[i]);
        cout << c;
    }

    cout << endl;

    return 0;
}
