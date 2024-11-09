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
    for(ll i = n; i >= 1; i--) {
        if(i%2!=0) cout << a[i] << " ";
    }
    return 0;
}