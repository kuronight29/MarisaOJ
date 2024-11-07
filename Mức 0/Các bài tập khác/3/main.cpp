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
    //freopen(taskname ".inp", "r", stdin);
    //freopen(taskname ".out", "w", stdout);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> s(3, 0);
    for (ll i = 0; i < n; i++) {
        s[a[i] % 3]++;
    }
    ll res = s[0] * (s[0] - 1) / 2 + s[1] * s[2];
    cout << res << endl;
    return 0;
}