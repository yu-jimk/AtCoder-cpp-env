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

    map<char, ll> mp;
    for (char c : s) {
        mp[c]++;
    }

    ll max_count = 0;
    for (auto [c, count] : mp) {
        max_count = max(max_count, count);
    }
    string new_s = "";
    for (char c : s) {
        if (mp[c] != max_count) {
            new_s += c;
        }
    }
    cout << new_s << endl;

    return 0;
}
