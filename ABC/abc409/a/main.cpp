// abc409 A - Conflict
#include <iostream>
using namespace std;
int main() {
    short n;
    string t, a;
    cin >> n;
    cin >> t;
    cin >> a;

    for (int i = 0; i < n; i++) {
        if (t[i] == 'o' && a[i] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
