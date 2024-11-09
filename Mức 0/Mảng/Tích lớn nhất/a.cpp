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
    for(ll i=0; i<n; i++) {
        cin >> a[i];
    }
    ll res = a[0] * a[1];
    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            if(res < a[i] * a[j]){
                res = a[i] * a[j];
            }
        }
    }
    cout << res;
    
    return 0;
}