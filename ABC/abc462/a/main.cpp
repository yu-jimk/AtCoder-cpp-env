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

    rep(i, s.size()) {
        if (!isalpha(s[i])) {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}
