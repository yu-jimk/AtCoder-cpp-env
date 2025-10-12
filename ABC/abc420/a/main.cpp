// abc420 A - What month is it?
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    if (x + y <= 12) {
        cout << x + y << endl;
        return 0;
    }

    cout << x + y - 12 << endl;

    return 0;
}