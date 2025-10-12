// abc423 C - Lock All Doors
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    vector<int> l(n);

    for (int i = 0; i < n; ++i)
        cin >> l[i];

    int first_open_index = -1, last_open_index = -1;

    for (int i = 0; i < n; ++i) {
        if (l[i] == 0) {
            first_open_index = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (l[i] == 0) {
            last_open_index = i;
            break;
        }
    }

    if (first_open_index == -1) {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;

    for (int i = first_open_index; i <= last_open_index; ++i) {
        if (l[i] == 0) {
            count++;
        } else {
            count += 2;
        }
    }

    if (r < first_open_index) {
        for (int i = r; i <= first_open_index - 1; ++i) {
            if (l[i] == 0) {
                count++;
            } else {
                count += 2;
            }
        }

    } else if (r > last_open_index + 1) {
        for (int i = last_open_index + 1; i <= r - 1; ++i) {
            if (l[i] == 0) {
                count++;
            } else {
                count += 2;
            }
        }
    }

    cout << count << endl;

    return 0;
}