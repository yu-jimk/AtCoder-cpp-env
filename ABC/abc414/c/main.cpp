// abc414 C - Palindromic in Both Bases
#include <bits/stdc++.h>
using namespace std;
#define ll long long

string toBaseN(ll n, int base) {
    char Digits[] = "0123456789";
    string s;

    while (n > 0) {
        s.push_back(Digits[n % base]);
        n /= base;
    }
    reverse(s.begin(), s.end());
    return s;
}

bool isPalindrome(string str) {
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    if (str == rev_str)
        return true;
    return false;
}

int main() {
    int a;
    ll n;
    cin >> a >> n;

    ll sum = 0;

    for (int i = 1; i <= n; ++i) {
        string i_str = to_string(i);
        if (isPalindrome(i_str) && isPalindrome(toBaseN(i, a))) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}