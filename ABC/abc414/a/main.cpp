// abc414 A - Streamer Takahashi
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, l, r;
    cin >> n >> l >> r;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        if (x <= l && r <= y) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}