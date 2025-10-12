// abc412 B - Precondition
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, t;
    cin >> s;
    cin >> t;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            bool found = false;
            for (int j = 0; j < t.size(); j++) {
                if (s[i - 1] == t[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
