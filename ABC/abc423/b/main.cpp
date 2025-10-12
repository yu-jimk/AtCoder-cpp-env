// abc423 B - Locked Rooms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);

    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    int first_one_index = 0;
    int last_one_index = 0;

    for (int i = 0; i < n; ++i) {
        if (l[i] == 1) {
            first_one_index = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (l[i] == 1) {
            last_one_index = i;
            break;
        }
    }

    cout << last_one_index - first_one_index << endl;

    return 0;
}