#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;

    map<char, bool> s_mp, t_mp;
    rep(i, n) {
        char s;
        cin >> s;
        s_mp[s] = true;
    }

    rep(i, m) {
        char t;
        cin >> t;
        t_mp[t] = true;
    }

    ll q;
    cin >> q;

    rep(i, q) {
        string w;
        cin >> w;

        bool is_takahashi = true;
        bool is_aoki =  true;

        rep(j, w.size()) {
            if (!s_mp[w[j]]) {
                is_takahashi = false;
            }else if (!t_mp[w[j]]) {
                is_aoki = false;
            }
        }
        if (is_takahashi && !is_aoki) {
            cout << "Takahashi" << endl;
        } else if (is_aoki && !is_takahashi) {
            cout << "Aoki" << endl;
        }else {
            cout << "Unknown" << endl;
        }
    }

    return 0;
}
