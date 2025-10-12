// abc418 A - I'm a teapot
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s[n - 1] == 'a' && s[n - 2] == 'e' && s[n - 3] == 't') {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}