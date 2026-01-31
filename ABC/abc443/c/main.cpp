#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, t;
    cin >> n >> t;

    if (n == 0) {
        cout << t << endl;
        return 0;
    }

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    // 開いていた時間の合計（始業時は開いているので高橋くんが最初に来るまでを加算）
    ll ans = a[0];

    // 閉じてから、次開く時刻
    ll open_num = a[0] + 100;

    reps(i, n - 1) {
        // 次開く時刻を越えるまでは青木くんが通り過ぎても無視
        if (open_num < a[i]) {
            // 今回開く時刻から青木くんが通り過ぎた時刻の差が開いていた時間
            ll diff = a[i] - open_num;
            ans += diff;

            // 青木くんが通り過ぎた = 閉じるので、次開く時刻を記録
            open_num = a[i] + 100;
        }
    }

    // 終業まで時間があるならその分を加算
    if ((t - open_num) > 0) {
        ans += t - open_num;
    }

    cout << ans << endl;

    return 0;
}
