#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 0; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    ll curr_p = 1;
    ll count = 0;

    rep(i, n) {
        ll n;
        cin >> n;
        if (curr_p < 0.5) {
            curr_p += n;
            if (curr_p > 0.5) {
                count++;
            }

        } else {
            curr_p -= n;
            if (curr_p < 0.5) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
