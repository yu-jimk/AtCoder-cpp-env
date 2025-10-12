// abc421 C - Alternated
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll total_odd = 0;
    ll total_even = 0;

    ll count_A = 0;

    for (ll i = 0; i < 2 * n; ++i) {
        if (s[i] == 'A') {
            ll target_even = 2 * count_A;
            total_even += abs(i - target_even);

            ll target_odd = 2 * count_A + 1;
            total_odd += abs(i - target_odd);

            count_A++;
        }
    }

    cout << min(total_even, total_odd) << endl;
    return 0;
}