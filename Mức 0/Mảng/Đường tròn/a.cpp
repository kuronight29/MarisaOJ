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
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) {
        cin >> a[i];
    }
    ll x,y;
    cin >> x >> y;
    x--; 
    y--; 
    ll res=0;
    ll s = accumulate(a.begin(), a.end(), 0LL);
    ll t = 0;
    for (ll i = x; i != y; i = (i + 1) % n) {
        t += a[i];
    }
    ll m = s - t;
    res = min(t, m);
    cout << res << endl;
    
    return 0;
}