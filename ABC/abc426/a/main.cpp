// abc426 A - OS Versions
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;
#define ll long long

int main() {

    string x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "Yes" << endl;
        return 0;
    } else if (x == "Lynx") {
        cout << "Yes" << endl;
        return 0;
    } else if (y == "Ocelot") {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}