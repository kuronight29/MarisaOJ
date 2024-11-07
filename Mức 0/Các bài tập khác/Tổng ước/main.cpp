/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll res = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res += i;
            if (i != n / i) {
                res += n / i;
            }
        }
    }
    cout << res;
    return 0;
}