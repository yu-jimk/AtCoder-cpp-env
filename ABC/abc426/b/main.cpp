// abc426 B - The Odd One Out
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
#define ll long long

int main() {

    string s;
    cin >> s;
    string ans, a, b;

    rep(i, s.size() - 1) {
        if (s[i] == s[i + 1]) {
            ans = s[i];
        } else {
            a = s[i];
            b = s[i + 1];
        }
    }
    if (ans == a) {
        cout << b << endl;
    } else {
        cout << a << endl;
    }

    return 0;
}