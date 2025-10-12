// abc411 A - Required Length
#include <bits/stdc++.h>
using namespace std;

int main() {

    string p;
    cin >> p;

    int l;
    cin >> l;

    if (p.size() >= l) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
