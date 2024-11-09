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
    vector<ll> b(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i]; 
    }
    sort(b.begin(), b.end());
    for(ll i = 0; i < n; i++) {
        if(a[i] == b[n-1]) {
            cout << b[n-1] << " " << i+1;
            break;
        }
    }
    
    return 0;
}