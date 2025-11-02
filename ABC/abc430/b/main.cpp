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

    vector<string> s(n);
    rep(i, n) cin >> s[i];

    set<string> s_past;

    rep(i, n-m+1){
        rep(j, n-m+1){
            string s_currect;
            rep(x, m){
                rep(y, m){
                    s_currect += s[i+x][j+y];
                }

            }
            
            s_past.insert(s_currect);
        }
    }

    cout << s_past.size() << endl;

    return 0;
}
