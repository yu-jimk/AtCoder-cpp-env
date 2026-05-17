#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    string s;
    cin >> s;

    ll end = s.length() - 1;

    ll ans = 0;

    rep(i, s.length()) {

        if (s[i] == 'C') {
            if (i < end) {
                ans += i + 1;
            } else {
                ans += end + 1;
            }
        }
        end--;
    }

    cout << ans << endl;
    return 0;
}
