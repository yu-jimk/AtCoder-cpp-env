// abc414 B - String Too Long
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int count = 0;
    vector<pair<char, int>> p(n);
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        int l;
        cin >> l;
        p.at(i) = make_pair(c, l);
        count += l;
        if (count > 100) {
            cout << "Too Long" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        auto [c, l] = p.at(i);
        for (int i = 0; i < l; ++i) {
            cout << c;
        }
    }

    cout << endl;
    return 0;
}