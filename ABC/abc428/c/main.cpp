// abc428 C - Brackets Stack Query
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)

int main() {
    ll Q;
    cin >> Q;
    vector<char> S;

    rep(_, Q) {
        ll t;
        cin >> t;
        if (t == 1) {
            char c;
            cin >> c;
            S.push_back(c);
        } else if (t == 2) {
            if (!S.empty()) S.pop_back();
        }

        stack<char> st;
        bool ok = true;
        rep(i, S.size()) {
            if (S[i] == '(') st.push('(');
            else {
                if (st.empty()) {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty()) ok = false;
        cout << (ok ? "Yes" : "No") << endl;
    }
}
