// abc428 B - Most Frequent Substrings
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int max_count = 0;
    set<string> max_strings;

    rep(i, n - k + 1) {
        string t = s.substr(i, k);
        int count = 0;

        rep(j, n - k + 1) {
            if (s.substr(j, k) == t) count++;
        }

        if (count > max_count) {
            max_count = count;
            max_strings.clear();
            max_strings.insert(t);
        } else if (count == max_count) {
            max_strings.insert(t);
        }
    }

    cout << max_count << endl;
    bool first = true;
    for (auto &str : max_strings) {
        if (!first) cout << " ";
        cout << str;
        first = false;
    }
    cout << endl;

    return 0;
}