// abc411 C - Black Intervals
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll n, q;
    cin >> n >> q;

    vector<ll> a(q);
    for (int i = 0; i < q; i++) {
        cin >> a.at(i);
    }

    vector<int> m(n + 2, 0);

    int count = 0;
    for (int i = 0; i < q; i++) {
        m[a[i]] = 1 - m[a[i]];

        if (m[a[i] - 1] + m[a[i] + 1] == 0) {
            if (m[a[i]] == 0) {
                count--;
            } else {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}