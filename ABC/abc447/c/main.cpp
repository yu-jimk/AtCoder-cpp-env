#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    string s, t;
    cin >> s >> t;

    string ignore_A_s = "";
    for (char c : s) {
        if (c != 'A') {
            ignore_A_s += c;
        }
    }
    string ignore_A_t = "";
    for (char c : t) {
        if (c != 'A') {
            ignore_A_t += c;
        }
    }
    if (ignore_A_s != ignore_A_t) {
        cout << -1 << endl;
        return 0;
    }

    ll count = 0;
    ll i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else if (s[i] == 'A') {
            i++;
            count++;
        } else if (t[j] == 'A') {
            j++;
            count++;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    while (i < s.size()) {
        if (s[i] == 'A') {
            count++;
        }
        i++;
    }
    while (j < t.size()) {
        if (t[j] == 'A') {
            count++;
        }
        j++;
    }

    cout << count << endl;
    return 0;
}