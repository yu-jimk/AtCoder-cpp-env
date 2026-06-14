#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> A(n + 1, vector<ll>(n + 1, 0));

    reps(i, n) {
        ll k;
        cin >> k;
        while (k--) {
            ll a;
            cin >> a;
            A[a][i] = 1;
            A[a][0]++;
        }
    }

    reps(i, n) {
        cout << A[i][0];

        reps(j, n) {
            if (A[i][j] == 1) {
                cout << " " << j;
            }
        }

        cout << endl;
    }

    return 0;
}
