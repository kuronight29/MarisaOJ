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
    
    ll dem = 0;
    ll s = a[n-1];
    for(ll i=n-2; i>=0; i--) {
        if(a[i] > s) {
            dem++;
        }
        s = max(s, a[i]);
    }
    
    cout << dem;
    return 0;
}