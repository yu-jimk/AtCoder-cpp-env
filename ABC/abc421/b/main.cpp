// abc421 B - Fibonacci Reversed
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findReverse(ll n) {
    ll reverse = 0;
    ll remainder = 0;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    return reverse;
}

int main() {

    ll x, y;
    cin >> x >> y;

    ll a1 = x;
    ll a2 = y;
    ll ai;

    for (int i = 2; i < 10; ++i) {
        ai = findReverse(a1 + a2);
        a1 = a2;
        a2 = ai;
    }

    cout << ai << endl;

    return 0;
}