// abc421 A - Misdelivery
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int x;
    string y;
    cin >> x >> y;

    if (s[x - 1] == y) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}