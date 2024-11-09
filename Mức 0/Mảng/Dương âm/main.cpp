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
    vector<ll> b, c;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) b.pb(a[i]);
        else c.pb(a[i]);
    }
    ll bsize = b.size();
    ll csize = c.size();
    vector<ll> res;
    ll i = 0, j = 0;
    while(i < bsize && j < csize) {
        res.pb(b[i++]);
        res.pb(c[j++]);
    }
    while(i < bsize) {
        res.pb(b[i++]);
    }
    while(j < csize) {
        res.pb(c[j++]);
    }
    for(ll i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}