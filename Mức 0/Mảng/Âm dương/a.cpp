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
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> b;
    for(ll i = 1; i <= n; i++) {
        if(a[i]<0) b.pb(a[i]);
    }
    for(ll i = 1; i <= n; i++) {
        if(a[i]>=0) b.pb(a[i]);}
    for(ll i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}