#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll size = 4;
    vector<char> s(size);
    rep(i, size) cin >> s[i];

    if ((s[0] == 'A' && s[3] == 'D') || (s[0] == 'D' && s[3] == 'A') ||
        (s[1] == 'A' && s[2] == 'D') || (s[1] == 'D' && s[2] == 'A')) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
