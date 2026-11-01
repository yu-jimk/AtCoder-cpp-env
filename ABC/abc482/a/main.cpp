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

    ll ans = count(s.begin(), s.end(), 'o');

    if (ans % 2) {
        cout << "odd" << endl;
    } else {
        cout << "even" << endl;
    }

    return 0;
}
