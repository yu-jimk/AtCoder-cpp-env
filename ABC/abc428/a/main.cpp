// abc428 A - Grandma's Footsteps
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
#define YES(b) ((b) ? "YES" : "NO")

int main() {
    int s,a,b,x;
    int ans = 0;

    cin >> s >> a >> b >> x;
    bool isRunning = true;
    while (x){
        if (isRunning){
            int run_time = min(a, x);
            ans += run_time * s;
            x -= run_time;
            isRunning = false;
        }else{
            int rest_time = min(b, x);
            x -= rest_time;
            isRunning = true;
        }
        
    }

    cout << ans << endl;

    return 0;
}
