// abc424 A - Isosceles
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        cout << "Yes" << endl;
        return 0;

    } else if (a == c) {
        cout << "Yes" << endl;
        return 0;

    } else if (b == c) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}