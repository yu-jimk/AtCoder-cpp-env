// abc413 B - cat 2
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    set<string> st;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            st.insert(s[i] + s[j]);
        }
    }
    cout << st.size() << endl;

    return 0;
}