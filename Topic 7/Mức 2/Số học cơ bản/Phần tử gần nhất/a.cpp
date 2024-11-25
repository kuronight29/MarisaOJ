/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define simp main
#define pb push_back
using namespace std;
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int simp() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++) {
        ll res = n + 1;
        ll ans = -1;
        for(ll j = 0; j < n; j++) {
            if (i != j && gcd(a[i], a[j]) != 1) {
                ll s = abs(i - j);
                if (s < res || (s == res && j < ans)) {
                    res = s;
                    ans = j;
                }
            }
        }
        if(ans!=-1){
            cout << ans + 1 << " ";
        } else {
            cout << -1 << " ";
        }
    }
    return 0;
}