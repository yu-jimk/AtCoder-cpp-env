// abc427 A - ABC -> AC",
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
                                using namespace std;
#define ll long long

int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i != (s.size() + 1) / 2 - 1) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}