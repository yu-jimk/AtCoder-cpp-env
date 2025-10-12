// abc418 B - You're a teapot
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    long double ans = 0.0L;

    for (int i = 0; i < n; i++) {
        if (s[i] != 't')
            continue;
        for (int j = i + 2; j < n; j++) {
            if (s[j] != 't')
                continue;
            int count = 0;
            for (int k = i; k <= j; k++) {
                if (s[k] == 't')
                    count++;
            }
            long double rate = (long double)(count - 2) / (j - i - 1);
            if (rate > ans)
                ans = rate;
        }
    }

    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}